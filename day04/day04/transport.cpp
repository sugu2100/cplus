#include "transport.h"

Bus::Bus(int busNumber, int money) {
	this->busNumber = busNumber;
	this->money = money;
}

void Bus::take(int fee) {
	this->money += fee;
}

void Bus::showInfo() {
	cout << this->busNumber << "번 버스의 수입은 "
		<< this->money << "원 입니다." << endl;
}

Subway::Subway(int subwayNumber, int money) {
	this->subwayNumber = subwayNumber;
	this->money = money;
}

void Subway::take(int fee) {
	this->money += fee;
}

void Subway::showInfo() {
	cout << this->subwayNumber << "호선 지하철의 수입은 "
		<< this->money << "원 입니다." << endl;
}

