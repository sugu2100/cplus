#include "person.h"

int main() {

	Person noName = Person();
	Person lee = Person("�̿���", 25);

	cout << "�̸� : " << noName.getName() << endl;
	cout << "���� : " << noName.getAge() << endl;

	cout << "�̸� : " << lee.getName() << endl;
	cout << "���� : " << lee.getAge() << endl;

	return 0;
}