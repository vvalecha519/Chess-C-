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

public: 
void replaceHuman();
void makeMove(Piece *);

};
#endif