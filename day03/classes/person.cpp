#include "person.h"

Person::Person() {
	name = "�̸�����";
	age = 1;
}

Person::Person(string name, int age) {
	this->name = name;
	this->age = age;
}

string Person::getName() {
	return name;
}

int Person::getAge() {
	return age;
}