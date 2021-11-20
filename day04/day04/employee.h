#include <iostream>
#include <string>
using namespace std;

class Employee {
	string name;
	int age;

public:
	Employee(string name = "unnamed", int age = 0); //선언부 초기화

	string getName();//get+멤버이름(){}
	void setName(string name);
	int getAge();
	void setAge(int age);
	void showInfo();
};

