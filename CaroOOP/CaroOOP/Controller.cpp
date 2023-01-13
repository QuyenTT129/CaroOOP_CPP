#include "Controller.h"

void Controller::controller() {
	while (!isGameOver)
	{
		m.getBoard().plotBoard();
		m.update(player);
		isGameOver = m.checkWin(draw);

		if (isGameOver)
		{
			if (draw)
				cout << "-----GAME DRAW-----";
			else
				cout << "-----Player " << --player << " is winner-----" << endl;
		}
	}
}
Match& Controller::getMatch() {
	return m;
}
