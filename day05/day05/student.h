#include <iostream>
using namespace std;

class Student {
	static int serialNum;  //기준값(클래스 변수)
	//int serialNum = 100  // 인스턴스 변수
	int studentId;  //학번

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