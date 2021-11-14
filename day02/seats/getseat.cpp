#include "seat.h"

void getSeat(int custom, int col) {
	int row;
	if (custom % col == 0) {
		row = custom / col;
	}
	else {
		row = (custom / col) + 1;
	}

	//cout << "필요한 줄 수는 " << row << "줄 입니다." << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 1; j < col; j++) {
			int seatNum = i * col + j;
			if (seatNum > custom) break;
			cout << "좌석" << seatNum << " ";

		}
		cout << endl;
	}
}