/*#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    //rand() �Լ� ���

    //srand(2);  //seed �ڵ� ����<time()>
    srand(time(NULL));  //seed �ڵ� ����<time()>

    //cout << rand() << endl;
    //rand() % 2 + 1;  //������ �� �ڸ�
    //rand() % 6 + 1;  //�ֻ����� ��
    //rand() % 10 + 1;  //1~10 ������ ��

    //�ֻ��� 10�� ������
    for (int i = 0; i < 10; i++) {
        int dice = rand() % 6 + 1;
        cout << dice << endl;
    }
   
    return 0;
}*/