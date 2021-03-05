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
	Done,
	LaunchFailure
};

class RFAOne_Statemachine {
private: 
	launchStates currentState;
	bool internalStatemachineError;
	bool nodeEngineState1;
	bool nodeEngineState2;
	bool nodeTelemetryState;
	bool nodeSensorState;
	bool payloadState;
	bool countdownStart;
	bool countdownDone;
	bool missionControlEnable;
	unsigned int internalCounter;
public:
	RFAOne_Statemachine(void);
	bool initStatemachine(void);
	bool cycleStatemachine(void);

	//Dummy functions for status of rocket nodes
	void checkMissionControl(void);
	void checkEngines(void);
	void checkTelemetry(void);
	void checkSensorsResultValid(void);
	void velocityMeasurement(void);
	void accelerationMeasurement(void);
	void heightMeasurement(void);

	//Rocket launch countdown
	void countdown(bool);
	//Dummy function to quit Statemachine
	void quitStatemachine(void);
};

#endif /*__cplusplus */
#endif /* __STATEMACHINE_H */