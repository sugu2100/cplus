#include <iostream>
using namespace std; //�Ҽ�(�з�)

int main() {

    int money, point;
    char memberInfo[30];   //�̸��� ��ȭ��ȣ
    //���� ����Ʈ = ���űݾ� * 5%

    cout << "�̸��� ��ȭ��ȣ�� �Է��ϼ��� : ";
    //cin >> memberInfo;
    cin.getline(memberInfo, sizeof(memberInfo));

    cout << "���� �ݾ��� �Է��ϼ��� : ";
    cin >> money;
    point = money * 0.05;

    cout << "���� ����Ʈ�� " << point << "���Դϴ�.";
    return 0;
}