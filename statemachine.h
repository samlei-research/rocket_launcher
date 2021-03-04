// This file contains the declaration of the statemachine
//
// Developer: Samuel Leitenmaier
//
// Description:
//   The statemachine handles the complete rocket launch

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STATEMACHINE_H
#define __STATEMACHINE_H

#ifdef __cplusplus

#include <stdint.h>
#include <stdlib.h>

#define maxDelay 1000


enum launchStates{
	PreLaunch,
	EngineIgnition,
	LaunchPadClampRelease,
	EngineShutoff,
	Staging,
	SecondEngineIgnition,
	FairingJettison,
	PayloadRelease,
	LaunchFailure
};

class RFAOne_Statemachine {
private: 
	launchStates currentState;
	bool internalStatemachineError;
public:
	bool initStatemachine();
	bool cycleStatemachine();
	void quitStatemachine();
}

#endif /*__cplusplus */
#endif /* __STATEMACHINE_H */