#pragma once
#include <iostream>
#include <string>
using namespace std;

class Bus {
	int busNumber;   //버스 번호
	int money;       //수입

public:
	Bus(int busNumber = 0, int money = 0); //생성자
	//선언할때 초기화하고 구현할땐 변수이름만 저장
	void take(int fee);   //요금을 받고 사람을 태움
	void showInfo();      //버스의 정보
};

class Subway {
	int subwayNumber;
	int money;

public:
	Subway(int subwayNumber = 0, int money = 0);
	void take(int fee);
	void showInfo();
};
