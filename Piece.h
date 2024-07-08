#ifndef PIECE_H
#define PIECE_H

typedef enum PieceType
{
	Pawn = 'P',
	Knight = 'N',
	Bishop = 'B',
	Rook = 'R',
	Queen = 'Q',
	King = 'K',
	Empty = 0
}PieceType;

typedef enum PieceColor {
	White,
	Black
}PieceColor;

typedef struct Piece{
	PieceType type{};
	PieceColor color{};
}Piece;

#endif // !PIECE_H
