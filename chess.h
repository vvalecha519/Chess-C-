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
void makeMove(Piece *, int x, int y);

};
#endif