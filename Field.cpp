#include "Field.h"

Field::Field()
{
	Piece defaultPiece{ Empty, White };
	this->piece = defaultPiece;
}

Field::Field(PieceType pieceType)
{
	this->piece.type = pieceType;
}

Field::Field(PieceType pieceType, PieceColor pieceColor)
{
	Piece newPiece{ pieceType, pieceColor };
	this->piece = newPiece;
}

PieceType Field::pieceType()
{
	return this->piece.type;
}

Piece Field::getPiece()
{
	return this->piece;
}

void Field::setPieceType(PieceType newPieceType)
{
	this->piece.type = newPieceType;
}

void Field::setPieceColor(PieceColor newPieceColor)
{
	this->piece.color = newPieceColor;
}

void Field::setPiece(Piece newPiece)
{
	this->piece = newPiece;
}

void Field::setPiece(PieceType newPieceType, PieceColor newPieceColor)
{
	this->piece.type = newPieceType;
	this->piece.color = newPieceColor;
}
