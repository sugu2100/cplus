/*#include <iostream>
using namespace std;

int stringToInt(const char x[]) { //'29'�� �Է�
    int sum = 0;
    for (int i = 0; i < strlen(x); i++) {
        if (x[i] >= '0' && x[i] <= '9')
            sum = sum * 10 + x[i] - '0';
        else
            throw x;  //���ڰ� �ƴ� ���, ���� �߻�
    }
    //29�Է� 
    //i = 0, 0 * 10 + 2 -> 2
    //i = 1, 2 * 10 + 9 -> 9
    return sum;
}*/


int main() {
    //���ڿ��� ������ ��ȯ�ϱ�

    int n;
    try{
        n = stringToInt("25");
        cout << "\" 25 \" �� ����" << n << " �� ��ȯ��" << endl;

        n = stringToInt("2a");
        cout << "\" 2a \" �� ����" << n << endl;
        }
    catch (const char* s) {
        cout << s << " ó������ ���� �߻�" << endl;
    }

    return 0;
}