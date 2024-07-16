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
		setPieceAt(Pawn, White, {(static_cast<char>(i+'a')), 2});
		setPieceAt(Pawn, Black, { (static_cast<char>(i + 'a')), 7 });
	}

	setPieceAt(Rook, White, { 'a', 1 });
	setPieceAt(Rook, White, { 'h', 1 });
	setPieceAt(Rook, Black, { 'a', 8 });
	setPieceAt(Rook, Black, { 'h', 8 });

	setPieceAt(Knight, White, { 'b', 1 });
	setPieceAt(Knight, White, { 'g', 1 });
	setPieceAt(Knight, Black, { 'b', 8 });
	setPieceAt(Knight, Black, { 'g', 8 });

	setPieceAt(Bishop, White, { 'c', 1 });
	setPieceAt(Bishop, White, { 'f', 1 });
	setPieceAt(Bishop, Black, { 'c', 8 });
	setPieceAt(Bishop, Black, { 'f', 8 });

	setPieceAt(Queen, White, { 'd', 1 });
	setPieceAt(Queen, Black, { 'd', 8 });

	setPieceAt(King, White, { 'e', 1 });
	setPieceAt(King, Black, { 'e', 8 });
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

std::ostream& operator<<(std::ostream& out, const Board& board)
{
	//TODO: Colorize the output
	for (int j = 0;j < DEFAULT_BOARD_SIZE;++j)
	{
		for (int i = 0;i < DEFAULT_BOARD_SIZE;++i)
		{
			switch (board.fields.at(i).at(j).getPiece().type)
			{
			case Pawn:
				out << (char)Pawn;
				break;
			case Knight:
				out << (char)Knight;
				break;
			case Bishop:
				out << (char)Bishop;
				break;
			case Rook:
				out << (char)Rook;
				break;
			case Queen:
				out << (char)Queen;
				break;
			case King:
				out << (char)King;
				break;
			case Unavailable:
			case Empty:
			default:
				out << 0;
				break;
			}
			out << " ";
		}
		out << "\n";
	}
	return out;
}
