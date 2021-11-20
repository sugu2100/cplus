#include "transport.h"

Bus::Bus(int busNumber, int money) {
	this->busNumber = busNumber;
	this->money = money;
}

void Bus::take(int fee) {
	this->money += fee;
}

void Bus::showInfo() {
	cout << this->busNumber << "�� ������ ������ "
		<< this->money << "�� �Դϴ�." << endl;
}

Subway::Subway(int subwayNumber, int money) {
	this->subwayNumber = subwayNumber;
	this->money = money;
}

void Subway::take(int fee) {
	this->money += fee;
}

void Subway::showInfo() {
	cout << this->subwayNumber << "ȣ�� ����ö�� ������ "
		<< this->money << "�� �Դϴ�." << endl;
}

