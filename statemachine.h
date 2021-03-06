// This file contains the declaration of the statemachine
//
// Developer: Samuel Leitenmaier
//
// Description:
//   The statemachine handles the complete rocket launch
#pragma once

#include <iostream>
#include <unistd.h>
#include <time.h>

//dummy values
#define maxDelay 1000
#define firstEngineOffHeight 20
#define secondEngineOffHeight 30
#define fairingJettisonHeight 40
#define maxPayloadVelocity 40

//dummy locationvalue for payload release
#define LongLatHeight 123


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
	//internal Statemachine componentes
	launchStates currentState;
	bool internalStatemachineError;

	//Status of each node in the rocket
	bool nodeEngineState1;
	bool nodeEngineState2;
	bool nodeTelemetryState;
	bool nodeSensorState;
	bool payloadState;

	//Countdown 
	bool countdownStart;
	bool countdownDone;

	//Mission Control
	bool missionControlEnable;

	//Comtrol States
	bool clamprelease;
	bool launchActive;

	//Dummy variables for measurement values
	unsigned int internalCounter;
	unsigned int flightHeight;
	unsigned int vertVelocity;
	unsigned int currentLongLatHeight;
public:
	RFAOne_Statemachine(void);
	~RFAOne_Statemachine(void);
	bool initStatemachine(void);
	bool cycleStatemachine(void);

	//Dummy functions for status of rocket nodes
	void checkMissionControl(void);
	void checkEngines(void);
	void checkTelemetry(void);
	void checkSensorsResultValid(void);

	//Dummy functions for control measurements
	void velocityMeasurement(void);
	void heightMeasurement(bool);
	void checkLocation();

	//dummy function for flight control
	void flightController(void);

	//Rocket launch countdown
	void countdown(bool);
	//Internal sleep function {milliseconds}
	void msleep(unsigned int);
	//Dummy function to quit Statemachine
	void quitStatemachine(void);
};
