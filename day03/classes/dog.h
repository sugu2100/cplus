//dog.h
#include <iostream>
#include <string>
//string �ڷ����� ����ϱ� ���� ���Խ�Ŵ
using namespace std;

class Dog {
public:
    string type;  //����
    string color; //����
    int age;      //����

    Dog();   //�⺻ ������
    Dog(string t, string c, int a); //�ܺ� �Է� �Ű����� �ִ� ������
    ~Dog();  //�Ҹ���

    void dogInfo();  //������� �Լ�
    void bark();
};
//class�� �⺻�� private �̹Ƿ� ��������� ���� �Ұ�
//public���� �����ϸ� ���� ����