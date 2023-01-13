#include "Controller.h"

int main() {
	Controller c;
	c.getMatch().getBoard().setSize(R, C);
	c.getMatch().getBoard().plotCaro();

	cout << "\tGAME CARO C++" << endl;
	cout << "PLAYER 1 - [X] \t PLAYER 2 = [O]\n" << endl;

	c.controller();
	return 0;
}
