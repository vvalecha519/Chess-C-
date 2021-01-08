#ifndef CELL_H
#define  CELL_H
//include libs
#include "position.h"
#include <vector>
#include <memory>
class Piece;
class Position; 


class Cell{ 
std::vector<Piece *> danger;
Piece *playerOnCell;
std::shared_ptr<Position> position;




};
#endif