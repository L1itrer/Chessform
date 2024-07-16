#ifndef FIELD_H
#define FIELD_H
#include "Piece.h"



class Field {
private:
	Piece piece;

public:
	Field();
	Field(PieceType pieceType);
	Field(PieceType pieceType, PieceColor pieceColor);
	PieceType pieceType() const;
	Piece getPiece() const;




	void setPieceType(PieceType newPieceType);
	void setPieceColor(PieceColor newPieceColor);
	void setPiece(Piece newPiece);
	void setPiece(PieceType newPieceType, PieceColor newPieceColor);


};


#endif // !PIECE_H



