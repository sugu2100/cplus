#include <iostream>
#include <string>
using namespace std;

struct Student {  //����� �⺻ public
    string name;
    int grade;
    string phone;
};

int main() {
    //�ڷ� ���� �� ����
    Student s1 = Student();   //s1 -> ����ü�� ����
    s1.name = "���ϳ�";
    s1.grade = 3;

    //��ü �迭�� ����
    Student s[3] = {
        {"�ڼ���", 2, "010-2222-5555"},
        {"�ڱݼ�", 1, "010-4444-5555"},
        {"�ڸ�", 3, "010-6666-5555"}
    };

    //�ڷ� ���
    cout << s1.name << " �л��� " << s1.grade << "�г��Դϴ�." << endl;

    for (int i = 0; i < 3; i++) {
        cout << s[i].name << " �л��� "
            << s[i].grade << "�г��̰�, ��ȭ ��ȣ�� "
            << s[i].phone << "�Դϴ�." << endl;
    }

    return 0;
}