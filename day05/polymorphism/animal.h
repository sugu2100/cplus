#include <iostream>
using namespace std;

class Animal {
public:
	void breathe() {
		cout << "숨을 쉽니다." << endl;
	}
	virtual void cry() {};  //구현을 하지 않은 가상함수
};

class Cat : public Animal {
public:
	void cry() {
		cout << "야~ 옹!!" << endl;
	}
};

class Dog : public Animal {
public:
	void cry() {
		cout << "멍~ 멍~" << endl;
	}
};

void cryAnimal(Animal* animal) {  //매개변수의 다형성
	animal->cry();
}
