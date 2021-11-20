#include "employee.h"
//Employee 구현부 파일
Employee::Employee(string name, int age) { //구현(정의)부
	this->name = name;
	this->age = age;
}

string Employee::getName() { return name; }

void Employee::setName(string name) { this->name = name; }

int Employee::getAge() { return age; }

void Employee::setAge(int age) { this->age = age; }

void Employee::showInfo() {
	cout << "이름 : " << this->getName() << endl;
	cout << "나이 : " << this->getAge() << endl;
}