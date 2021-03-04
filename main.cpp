// This file contains the main execution of the rocket launch
//
// Developer: Samuel Leitenmaier
//
// Description:
//   Main()-Function to handle all nodes

#include <stdint.h>
#include <stdlib.h>
#include "statemachine.h"

int main(void){

	RFAOne_Statemachine = tmpStatemachine;
	tmpStatemachine = new tmpStatemachine;

	bool RFAOneStatus = false;

	RFAOneStatus = tmpStatemachine.initStatemachine();

	while(RFAOneStatus){

		RFAOneStatus = tmpStatemachine.cycleStatemachine();

	}

	tmpStatemachine.quitStatemachine;

	free(tmpStatemachine);

	return 0;
}
