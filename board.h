
#ifndef BOARD_H
#define  BOARD_H
//include libs
#include "cell.h"
#include <vector>

class King;

class Board{ 
    std::vector<std::vector<Cell>> board;
    King* blackKingPos;
    King* QueenKingPos;
void updateMove();
std::vector<std::vector<Cell>> getBoard();

public:
void makeMove(Piece *);

};
#endif