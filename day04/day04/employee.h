#include <iostream>
#include <string>
using namespace std;

class Employee {
	string name;
	int age;

public:
	Employee(string name = "unnamed", int age = 0); //����� �ʱ�ȭ

	string getName();//get+����̸�(){}
	void setName(string name);
	int getAge();
	void setAge(int age);
	void showInfo();
};

