#pragma once
#include <iostream>
#include <string>
using namespace std;

class Bus {
	int busNumber;   //���� ��ȣ
	int money;       //����

public:
	Bus(int busNumber = 0, int money = 0); //������
	//�����Ҷ� �ʱ�ȭ�ϰ� �����Ҷ� �����̸��� ����
	void take(int fee);   //����� �ް� ����� �¿�
	void showInfo();      //������ ����
};

class Subway {
	int subwayNumber;
	int money;

public:
	Subway(int subwayNumber = 0, int money = 0);
	void take(int fee);
	void showInfo();
};
