// This file contains the definition of the statemachine
//
// Developer: Samuel Leitenmaier
//
// Description:
//   The statemachine handles the complete rocket launch

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <unistd.h>
#include "statemachine.h"

RFAOne_Statemachine::RFAOne_Statemachine(void){

}

bool RFAOne_Statemachine::initStatemachine(void){
	this->currentState = PreLaunch;

	this->missionControlEnable = false;
	this->internalStatemachineError = false;
	this->countdownStart = false;
	this->countdownDone = false;

	this->internalCounter = 10;

	return true;
}

bool RFAOne_Statemachine::cycleStatemachine(void){

	this->checkMissionControl();

	this->countdown(this->countdownStart);

	this->checkEngines();
	this->checkTelemetry();
	this->checkSensorsResultValid();

	switch(this->currentState){
		case PreLaunch:
			std::cout << "State: PreLaunch" << std::endl;

			if(nodeEngineState1 && nodeEngineState2 && nodeTelemetryState && nodeSensorState && missionControlEnable){
				this->currentState = EngineIgnition;
				this->countdownStart = true;
			}else if(internalStatemachineError){
				this->currentState = LaunchFailure;
				this->countdownStart = false;
			}

		break;
		case EngineIgnition:
			std::cout << "State: EngineIgnition" << std::endl;

			if(nodeEngineState1 && nodeEngineState2 && nodeTelemetryState && nodeSensorState && missionControlEnable && countdownDone){
				this->currentState = LaunchPadClampRelease;
			}else if(internalStatemachineError){
				this->currentState = LaunchFailure;
				this->countdownStart = false;
			}

		break;
		case LaunchPadClampRelease:
			std::cout << "State: LaunchPadClampRelease" << std::endl;

			if(nodeEngineState1 && nodeEngineState2 && nodeTelemetryState && nodeSensorState && missionControlEnable && countdownDone){
				this->currentState = EngineShutoff;
			}else if(internalStatemachineError){
				this->currentState = LaunchFailure;
				this->countdownStart = false;
			}

		break;
		case EngineShutoff:
			std::cout << "State: EngineShutoff" << std::endl; // Height measurement

			if(nodeEngineState1 && nodeEngineState2 && nodeTelemetryState && nodeSensorState){
				this->currentState = Staging;
			}

		break;
		case Staging:
			std::cout << "State: Staging" << std::endl;

			if(nodeEngineState2 && nodeTelemetryState && nodeSensorState){
				this->currentState = SecondEngineIgnition;
			}

		break;
		case SecondEngineIgnition:
			std::cout << "State: SecondEngineIgnition" << std::endl;

			if(nodeEngineState2 && nodeTelemetryState && nodeSensorState){
				this->currentState = FairingJettison;
			}

		break;
		case FairingJettison:
			std::cout << "State: FairingJettison" << std::endl;

			if(nodeEngineState2 && nodeTelemetryState && nodeSensorState){
				this->currentState = PayloadRelease;
			}

		break;
		case PayloadRelease:
			std::cout << "State: PayloadRelease" << std::endl;

			if(nodeEngineState2 && nodeTelemetryState && nodeSensorState && missionControlEnable){
				this->currentState = Done;
			}

		break;
		case Done:
			std::cout << "State: Done" << std::endl;
		break;
		case LaunchFailure:
			std::cout << "State: LaunchFailure" << std::endl;

			if(nodeEngineState2 && nodeTelemetryState && nodeSensorState && missionControlEnable){
				this->currentState = EngineIgnition;
			}else if(internalStatemachineError){

			}

		break;
	}

	return true;

}



void RFAOne_Statemachine::checkMissionControl(void){
	missionControlEnable = true;
}

void RFAOne_Statemachine::checkEngines(void){
	usleep(10);
	this->nodeEngineState1 = true;
	this->nodeEngineState2 = true;
}
void RFAOne_Statemachine::checkTelemetry(void){
	usleep(10);
	this->nodeTelemetryState = true;
}
void RFAOne_Statemachine::checkSensorsResultValid(void){
	usleep(20);
	this->nodeSensorState = true;
}
void RFAOne_Statemachine::velocityMeasurement(void){
	usleep(20);
}
void RFAOne_Statemachine::accelerationMeasurement(void){
	usleep(20);
}

void RFAOne_Statemachine::heightMeasurement(void){
	usleep(20);
}


void RFAOne_Statemachine::countdown(bool enable){
	
	if(enable){
		usleep(1000000);

		if (internalCounter == 0){
			countdownDone = true;
		}else{
			internalCounter--;
		}
	}
}

void RFAOne_Statemachine::quitStatemachine(void){
	this->currentState = PreLaunch;
}