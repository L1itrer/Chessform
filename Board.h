#ifndef BOARD_H
#define BOARD_H
#include "Field.h"

#include <array>
#include <iostream>

constexpr int DEFAULT_BOARD_SIZE = 8;

typedef struct ChessCoordinate {
	int letter{};
	char number{};
}ChessCoordinate;

class Board {
private:
	std::array<std::array<Field, DEFAULT_BOARD_SIZE>, DEFAULT_BOARD_SIZE> fields {};
	int turn;
public:

	Board();
	~Board();
	
	void defaultSetup();

	Piece getPieceAt(ChessCoordinate coordinates);
	void setPieceAt(Piece piece, ChessCoordinate coordinates);
	void setPieceAt(PieceType pieceType, PieceColor pieceColor, ChessCoordinate);

	friend std::ostream& operator<< (std::ostream& out, const Board& board);
};




#endif
