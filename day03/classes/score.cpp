#include "score.h"

void Score::setScore(int sco) { //점수 입력 함수 구현
	score = sco;
}

int Score::getScore() {
	return score;
}

void Score::showScore() {
	cout << "점수 = " << score << endl;
}

