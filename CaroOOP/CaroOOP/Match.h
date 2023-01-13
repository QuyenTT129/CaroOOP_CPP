#pragma once
#pragma once
#include "Board.h"
#include <vector>
#pragma once

class Match {
public:
	Board board;

public:
	void setBoard(Board _board);
	Board& getBoard();

	bool checkChar(vector<vector<char>> v, int ROW, int COLUMN);
	void update(int player);
	bool checkWin(bool draw);


};
