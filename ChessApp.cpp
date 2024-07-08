// ChessApp.cpp : Defines the entry point for the application.
//

#include "ChessApp.h"
#include "raylib.h"
#include "Board.h"

int main()
{
	InitWindow(800, 600, "Chess");

	Board board;


	while (!WindowShouldClose())
	{
		BeginDrawing();

		ClearBackground(DARKPURPLE);
		DrawText("Dziala", 400, 200, 40, GOLD);

		EndDrawing();
	}
}
