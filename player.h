#ifndef PLAYER_H
#define  PLAYER_H
//include libs

class Player{ 
    std::vector<std::vector<Cell>>* board;
    std::vector<Piece*> myPieces;
    std::vector<Piece*> myLostPieces;


    public:
    //move the given piece, if not in myPieces then throw error
    Piece* movePiece(Cell* gotoCell, Piece* piece);

};
#endif