#ifndef FIELD_H
#define FIELD_H
#include "Piece.h"



class Field {
public:
	Field();
	Field(const Piece pieceType);
	PieceType piece_type();
	Piece piece();
private:
	Piece piece;


};


#endif // !PIECE_H



