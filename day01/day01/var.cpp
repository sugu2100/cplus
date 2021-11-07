#include <iostream>
using namespace std; //소속(분류)

int main() {

	//char name[7] = "홍길동"; //'\0'이 존재
	string name = "홍길동";
	int grade;     //학년
	//int class;   //예약어(키워드) 사용 불가
	int schoolClass; //반

	grade = 2;
	schoolClass = 5;

	cout << name << " 학생은 " << grade << "학년 " << 
		schoolClass << "반입니다." << endl;

	return 0;
}