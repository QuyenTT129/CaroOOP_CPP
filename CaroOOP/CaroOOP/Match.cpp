#include "Match.h"

void Match::setBoard(Board _board) { board = _board; }
Board& Match::getBoard() {
	return board;
}


bool Match::checkChar(vector<vector<char>> v, int ROW, int COLUMN) {

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COLUMN; j++) {
			if (v[i][j] == ' ') {
				return false;
			}
		}

	}
}

void Match::update(int player) {
	char mark;
	player = (player % 2) ? 1 : 2;
	mark = (player == 1) ? 'X' : 'O';

	int x, y;
	do
	{
		cout << "Player " << player << " turn: ";
		cin >> x >> y;
	} while (x > board.getRows() - 1 || y > board.getColumns() - 1 || board.getPoint()[x][y] != ' ');

	if (board.getPoint()[x][y] == ' ')
		board.getPoint()[x][y] = mark;
	player++;
}
bool Match::checkWin(bool draw)
{

	for (int i = 0; i < board.getRows(); i++) {
		for (int j = 0; j < board.getColumns(); j++) {
			if (board.getPoint()[i][j] != ' ' && board.getPoint()[i][j] == board.getPoint()[i][j + 1] && board.getPoint()[i][j] == board.getPoint()[i][j + 2] && board.getPoint()[i][j] == board.getPoint()[i][j + 3]) {
				return true;
			}
			else if (board.getPoint()[i][j] != ' ' && board.getPoint()[i][j] == board.getPoint()[i + 1][j] && board.getPoint()[i][j] == board.getPoint()[i + 2][j] && board.getPoint()[i][j] == board.getPoint()[i + 3][j]) {
				return true;
			}
			else if (board.getPoint()[i][j] != ' ' && board.getPoint()[i][j] == board.getPoint()[i + 1][j + 1] && board.getPoint()[i][j] == board.getPoint()[i + 2][j + 2] && board.getPoint()[i][j] == board.getPoint()[i + 3][j + 3]) {
				return true;
			}
			// Tổng các phần tử trong board không còn ' ' nữa.
			else if (checkChar(board.getPoint(), board.getRows(), board.getColumns())) {
				draw = true;
				return true;
			}
			return false;

		}
	}
}




