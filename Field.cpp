#include "Field.h"
#include "Field.h"

Field::Field()
{
	this->piece = {0};
}

Field::Field(const Piece pieceType)
{
	this->pieceType = pieceType;
}

Piece Field::piece_type()
{
	return this->pieceType;
}

Piece Field::piece()
{
	return this->piece;
}
