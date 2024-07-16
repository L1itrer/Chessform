#include <iostream>
#include "ChessApp.h"
//#include "raylib.h"
#include "Board.h"

int main()
{
	Board board;
	board.defaultSetup();
	std::cout << board << "\n";
}
