#pragma once
#include "Match.h"

class Controller {
	Match m;
	int player = 1;
	bool isGameOver = false;
	bool draw = false;
public:
	void controller();
	Match& getMatch();
};