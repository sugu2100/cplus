#include "score.h"

void Score::setScore(int sco) { //���� �Է� �Լ� ����
	score = sco;
}

int Score::getScore() {
	return score;
}

void Score::showScore() {
	cout << "���� = " << score << endl;
}

