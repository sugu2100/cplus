#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	int age;

public:
	Person();
	Person(string name, int age);

	string getName();
	int getAge();
};