#include <iostream>
using namespace std;

int main() {
    //1���� 10���� ��� - 5�� 6�� �����ϰ� ���
    /*for (int i = 1; i <= 10; i++) {
        if (i == 5 || i == 6)
            continue;   //�Ʒ��� �������� �ٽ� ���� �÷�����
        cout << i << endl;
    }*/

    //1���� 10������ Ȧ���� ��
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0)
            continue;
        sum += i;
        cout << i << " ";
    }
    cout << endl;
    cout << sum << endl;
    return 0;
}