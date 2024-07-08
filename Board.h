#ifndef BOARD_H
#define BOARD_H
#include "Field.h"

#include <array>

constexpr int DEFAULT_BOARD_SIZE = 8;

class Board {
private:
	std::array<std::array<Field, DEFAULT_BOARD_SIZE>, DEFAULT_BOARD_SIZE> fields {};
	int turn;

public:
	Board();
	~Board();
	
	void default_setup();

	void draw_board();
	void draw_pieces();
};




#endif
