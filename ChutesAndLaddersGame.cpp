//
//  ChutesAndLaddersGame.cpp
//

#include <iostream>
#include <string>

#include "ChutesAndLaddersGame.h"
#include "GameBoard.h"
#include "Player.h"

using namespace std;

// TODO: implement the constructor with all your team members
// constructor with the default value of a minimum players
ChutesAndLaddersGame::ChutesAndLaddersGame(int nPlayers) : winner("no winner") {
   //// TODO: implement this function properly
   //throw std::logic_error("not implemented yet");
   
   Player p_one("Coco");
   Player p_two("Anthony");
   Player p_three("Erik");
   gamePlayers.enqueue(p_one);
   gamePlayers.enqueue(p_two);
   gamePlayers.enqueue(p_three);
}

// TODO: implement the destructor
// destructor - dequeue players from the queue
ChutesAndLaddersGame::~ChutesAndLaddersGame() {
   //// TODO: implement this function properly
   //throw std::logic_error("not implemented yet");
	
   int num_players = gamePlayers.size();
   for(int i = 0; i < num_players; i++)
   {
	   gamePlayers.dequeue();
	}
}

// TO DO: implement this function properly
// reset the game - rebuild the list of players
//        (i.e., the list should be the same as in the constructor).
//        Place all players at the figurative square zero
void ChutesAndLaddersGame::resetGame() {
   //// TODO: implement this function properly
   //throw std::logic_error("not implemented yet");
  
	int num_players = gamePlayers.size();
   for(int i = 0; i < num_players; i++)
   {
	   
	   gamePlayers.dequeue();
	   
   }
   Player p_one("Coco");
   Player p_two("Anthony");
   Player p_three("Erik");
   gamePlayers.enqueue(p_one);
   gamePlayers.enqueue(p_two);
   gamePlayers.enqueue(p_three);

   //winner="no winner";
}

// TO DO: implement this function properly
// Play the chutes and ladders until a player reaches the winning square 100
//    - Each player takes turn to roll the die and moves to the new square by invoking rollDieAndMove.
//         If the new square is outside of the board, the player stays put
//    - Player's new position is checked against the game board's checkChutesLadders
//    - checkChutesLadders returns a different square if player lands on a chute or a ladder
//    - Player's position is then set to the new position as indicated by checkChutesLadders
//          If player lands on a chute or a ladder, player slides down or climbs up
//    - If player lands on the winning square 100, game is over
//    - playGame returns after congratulating and printing the winner's name
void ChutesAndLaddersGame::playGame() {
   //// TODO: implement this function properly
   //throw std::logic_error("not implemented yet");

   Player myturn;
   gameBoard.buildBoard();
   while(myturn.getPostion() != 100)
   {
		myturn = gamePlayers.front();
		gamePlayers.dequeue();
	    myturn.rollDieAndMove();
		myturn.setPostion(gameBoard.checkChutesLadders(myturn.getPostion()));
		cout << myturn.getPostion() << endl;
		if(myturn.getPostion() == 100){
			winner = myturn.getName();
			cout << "CONGRATUATIONS " << winner << "!!!" << endl;
			cout << "YOU WON THE GAME!!!" << endl;
		}
		gamePlayers.enqueue(myturn);
		
   }
      
}
