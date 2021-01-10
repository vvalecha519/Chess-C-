#ifndef CHESS_H
#define  CHESS_H
//include libs
#include "player.h"
#include "board.h"
class Piece;

class Chess{ 

Player players[2];
Board board;
bool curPlayer;

std::vector<std::vector<Cell>> getBoard();

public: 
void replaceHuman();
//first call Player method move, to change position of player's piece if valid, then update
//the board with the given Piece
void makeMove(int xStart, int yStart, int xEnd, int yEnd); 

};
#endif