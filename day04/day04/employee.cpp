#include "employee.h"
//Employee ������ ����
Employee::Employee(string name, int age) { //����(����)��
	this->name = name;
	this->age = age;
}

string Employee::getName() { return name; }

void Employee::setName(string name) { this->name = name; }

int Employee::getAge() { return age; }

void Employee::setAge(int age) { this->age = age; }

void Employee::showInfo() {
	cout << "�̸� : " << this->getName() << endl;
	cout << "���� : " << this->getAge() << endl;
}