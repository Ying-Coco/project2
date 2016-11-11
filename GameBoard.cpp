//
//  GameBoard.cpp
//

#include "GameBoard.h"

// Build the gameboard
// If the landing square is a chute, set the position to the corresponding lower square
// I.e., player slides down to the lower square
// If the landing square is a ladder, set the position to the corresponding higher square
// Player climbs up to the higher square
// Otherwise, player stays put at the landing square
// TO DO: implement this method
void GameBoard::buildBoard() {
 //  // TODO: implement this function properly
	//throw std::logic_error("not implemented yet");
	
	gmBoard.reserve(BOARD_SIZE);

	for(int i=0; i<BOARD_SIZE; i++)
		gmBoard[i]=i;
	
	//Ladders
	gmBoard[1] = 38;
	gmBoard[4] = 14;
	gmBoard[9] = 31;
	gmBoard[21] = 42;
	gmBoard[28] = 84;
	gmBoard[36] = 44;
	gmBoard[51] = 67;
	gmBoard[71] = 91;
	gmBoard[80] = 100;

	//Chutes
	gmBoard[16] = 6;
	gmBoard[47] = 26;
	gmBoard[49] = 11;
	gmBoard[56] = 53;
	gmBoard[62] = 19;
	gmBoard[64] = 60;
	gmBoard[87] = 24;
	gmBoard[93] = 73;
	gmBoard[95] = 75;
	gmBoard[98] = 78;
	
}
