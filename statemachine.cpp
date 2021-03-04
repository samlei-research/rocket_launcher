// This file contains the definition of the statemachine
//
// Developer: Samuel Leitenmaier
//
// Description:
//   The statemachine handles the complete rocket launch

#include <stdio.h>
#include <stdlib.h>

RFAOne_Statemachine::initStatemachine(){
	this.currentState = PreLaunch;
	this.nextState = EngineIgnition;
	internalStatemachineError = false;
}

RFAOne_Statemachine::cycleStateMachine(){

	switch(this.currentState){
		case PreLaunch:
		break;
		case EngineIgnition:
		break;
		case LaunchPadClampRelease:
		break;
		case EngineShutoff:
		break;
		case Staging:
		break;
		case SecondEngineIgnition:
		break;
		case FairingJettison:
		break;
		case PayloadRelease:
		break;
		case LaunchFailure:
		break;
	}

}

RFAOne_Statemachine::quitStateMachine(){
	this.currentState = PreLaunch;
	this.nextState = EngineIgnition;


}