#include <iostream>
using namespace std;

class Student {
	static int serialNum;  //���ذ�(Ŭ���� ����)
	//int serialNum = 100  // �ν��Ͻ� ����
	int studentId;  //�й�

public:
	Student();
	int getStudentId();
};

Student::Student() {
	serialNum++;
	studentId = serialNum;
}

int Student::getStudentId() {
	return studentId;
}