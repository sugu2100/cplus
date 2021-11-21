/*#include "animal.h"

void cryAnimal();
int main() {
	//Animal animal = Animal();
	//animal.breathe();

	//Cat cat = Cat();
	
	Animal* cat = new Cat(); //new - 메모리에서 생성
	//부모클래스에서 객체 생성 - 자동형변환
	cat->breathe();
	//cat->cry();

	Animal* dog = new Dog();
	dog->breathe();
	//dog->cry();

	//cryAnimal() 호출
	cryAnimal(cat);
	cryAnimal(dog);

	delete cat;   //메모리에서 해제
	delete dog;

	return 0;
}*/