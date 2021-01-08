
#ifndef PIECE_H
#define  PIECE_H
//include libs
#include <vector>
#include "cell.h"
#include <memory>

class Player;

class Piece{


    std::vector<std::vector<Cell>> board;
    Cell* cell;
std::shared_ptr<Position> position;
std::vector<Cell> moves; 
std::vector<Cell *> moves; 
std::vector<Player *> attackedBy; 
bool color; //black  = 0 & white = 1

public:
virtual std::vector<Cell *> getValidMoves(); 
Position *getPosition();
void updatePiece();
};
#endif