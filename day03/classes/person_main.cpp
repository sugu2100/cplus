#include "person.h"

int main() {

	Person noName = Person();
	Person lee = Person("이우주", 25);

	cout << "이름 : " << noName.getName() << endl;
	cout << "나이 : " << noName.getAge() << endl;

	cout << "이름 : " << lee.getName() << endl;
	cout << "나이 : " << lee.getAge() << endl;

	return 0;
}