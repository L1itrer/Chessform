#include "Board.h"
#include "Field.h"

Board::Board()
	:turn(0)
{

}

Board::~Board()
{
}



void Board::defaultSetup()
{
	for (int i = 0;i < DEFAULT_BOARD_SIZE;++i)
	{
		fields.at(i).at(1).setPiece(Pawn, Black);
		fields.at(i).at(6).setPiece(Pawn, White);
	}
	fields.at(0).at(0).setPiece(Rook, Black);
	fields.at(7).at(0).setPiece(Rook, Black);
	fields.at(0).at(7).setPiece(Rook, White);
	fields.at(7).at(7).setPiece(Rook, White);

	fields.at(1).at(0).setPiece(Knight, Black);
	fields.at(6).at(0).setPiece(Knight, Black);
	fields.at(1).at(7).setPiece(Knight, White);
	fields.at(6).at(7).setPiece(Knight, White);

	fields.at(0).at(0).setPiece(Bishop, Black);
	fields.at(7).at(0).setPiece(Bishop, Black);
	fields.at(0).at(7).setPiece(Bishop, White);
	fields.at(7).at(7).setPiece(Bishop, White);



}

Piece Board::getPieceAt(ChessCoordinate coordinates)
{
	int actual_letter = coordinates.letter - 'a';//in memory the x of the board is from 0-7 so
	//from the value of the letter you need to subtract 49 or 'a' to get a number from 0-7
	int actual_number = abs(coordinates.number - 8);//in memory the y of the board is a number from 0-7
	//not from 1-8, but it is also inverted, as i assume the board is displayed from whites prespecitve
	//abs(6 - 8) == 2, abs(5 - 8) == 3
	return fields.at(actual_letter).at(actual_number).getPiece();
}

void Board::setPieceAt(Piece piece, ChessCoordinate coordinates)
{
	int actual_letter = coordinates.letter - 'a';//the explanation is the same as above
	int actual_number = abs(coordinates.number - 8);
	fields.at(actual_letter).at(actual_number).setPiece(piece);
}

void Board::setPieceAt(PieceType pieceType, PieceColor pieceColor, ChessCoordinate coordinates)
{
	int actual_letter = coordinates.letter - 'a';//the explanation is the same as above
	int actual_number = abs(coordinates.number - 8);
	fields.at(actual_letter).at(actual_number).setPiece(pieceType, pieceColor);
}
