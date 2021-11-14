//dog.h
#include <iostream>
#include <string>
//string 자료형을 사용하기 위해 포함시킴
using namespace std;

class Dog {
public:
    string type;  //종류
    string color; //색상
    int age;      //나이

    Dog();   //기본 생성자
    Dog(string t, string c, int a); //외부 입력 매개변수 있는 생성자
    ~Dog();  //소멸자

    void dogInfo();  //정보출력 함수
    void bark();
};
//class는 기본이 private 이므로 멤버변수에 접근 불가
//public으로 설정하면 접근 가능