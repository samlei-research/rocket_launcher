// This file contains the definition of the statemachine
//
// Developer: Samuel Leitenmaier
//
// Description:
//   The statemachine handles the complete rocket launch

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "statemachine.h"

RFAOne_Statemachine::RFAOne_Statemachine(void){

}

bool RFAOne_Statemachine::initStatemachine(void){
	this->currentState = PreLaunch;
	// this->nextState = EngineIgnition;
	internalStatemachineError = false;

	return true;
}

bool RFAOne_Statemachine::cycleStatemachine(void){

	switch(this->currentState){
		case PreLaunch:
			std::cout << "State: PreLaunch" << std::endl;
		break;
		case EngineIgnition:
			std::cout << "State: EngineIgnition" << std::endl;
		break;
		case LaunchPadClampRelease:
			std::cout << "State: LaunchPadClampRelease" << std::endl;
		break;
		case EngineShutoff:
			std::cout << "State: EngineShutoff" << std::endl;
		break;
		case Staging:
			std::cout << "State: Staging" << std::endl;
		break;
		case SecondEngineIgnition:
			std::cout << "State: SecondEngineIgnition" << std::endl;
		break;
		case FairingJettison:
			std::cout << "State: FairingJettison" << std::endl;
		break;
		case PayloadRelease:
			std::cout << "State: PayloadRelease" << std::endl;
		break;
		case LaunchFailure:
			std::cout << "State: LaunchFailure" << std::endl;
		break;
	}

	return true;

}

void RFAOne_Statemachine::quitStatemachine(void){
	this->currentState = PreLaunch;
	// this->nextState = EngineIgnition;


}