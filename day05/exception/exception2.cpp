/*#include <iostream>
using namespace std;

int main() {
    //0���� ������������ ����ó��
    //try ~ catch ���� : throw�� ���� ó���������� ����
    int n1, n2;
    int quotient;

    try {
        cout << "��1 : ";
        cin >> n1;

        cout << "��2 : ";
        cin >> n2;

        if (n2 == 0)  //���� �߻�
            throw n1; //catch�� ����

        quotient = n1 / n2;
        cout << "�� : " << quotient;
    }
    catch (int e_n) {
        cout << e_n << "�� 0���� ���� �� �����ϴ�.!!" << endl;
    }


    return 0;
}*/