#pragma once
#include <iostream>
#include <string>
#include "transport.h"
using namespace std;

class Person {
	string name;
	int money;     //���� ��

public:
	Person(string name, int money = 0); //������ ����
	void takeBus(Bus bus);  //����� ������ ź��
	void takeSubway(Subway subway);
	void showInfo();        //��� ���� ���

};

Person::Person(string name, int money) {  //������ ����
	this->name = name;
	this->money = money;
}

void Person::takeBus(Bus bus) {
	bus.take(1300);
	this->money -= 1300;
}

void Person::takeSubway(Subway subway) {
	subway.take(1200);
	this->money -= 1200;
}

void Person::showInfo() {
	cout << this->name << "���� ���� ���� " 
		 << this->money << "�� �Դϴ�." << endl;
}
