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
