
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
void updateBoard();
std::vector<std::vector<Cell>> getBoard();

public:
void makeMove(Piece *);
Cell *getCell(int x, int y);
Piece *getPiece(int x, int y);

};
#endif