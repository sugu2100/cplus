#pragma once
#include <iostream>
#include <string>
#include "transport.h"
using namespace std;

class Person {
	string name;
	int money;     //가진 돈

public:
	Person(string name, int money = 0); //생성자 선언
	void takeBus(Bus bus);  //사람이 버스를 탄다
	void takeSubway(Subway subway);
	void showInfo();        //사람 정보 출력

};

Person::Person(string name, int money) {  //생성자 구현
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
	cout << this->name << "님은 남은 돈은 " 
		 << this->money << "원 입니다." << endl;
}
