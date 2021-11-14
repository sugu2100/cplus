#include <iostream>
#include <cstring>
using namespace std;

struct Student {
    char name[20];
    int grade;
    char phone[20];
};

int main() {
    //자료 생성 및 저장
    struct Student s1;   //s1 -> 구조체의 변수
    strcpy_s(s1.name, 20, "이우주");
    s1.grade = 1;
    strcpy_s(s1.phone, sizeof(s1.phone), "010-1234-5678");

    struct Student s2 = {"박화성", 2, "010-3333-5555"};

    //객체 배열로 생성
    struct Student s[3] = {
        {"박수성", 2, "010-2222-5555"},
        {"박금성", 1, "010-4444-5555"},
        {"박목성", 3, "010-6666-5555"}
    };

    //자료 출력
    cout << s1.name << " 학생은 " << s1.grade << "학년입니다." << endl;
    cout << s2.name << " 학생은 " << s2.grade << "학년입니다." << endl;

    for (int i = 0; i < 3; i++) {
        cout << s[i].name << " 학생은 "
            << s[i].grade << "학년이고, 전화 번호는 "
            << s[i].phone << "입니다." << endl;
    }

    return 0;
}