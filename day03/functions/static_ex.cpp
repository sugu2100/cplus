#include <iostream>
using namespace std;

void count() {
    int x = 0;         //���� ����
    static int y = 0;  //���� ����(���α׷��� ����Ǿ�� ������)
    x += 1;
    y += 1;
    cout << "x = " << x << ", y = " << y << endl;
}

int main() {

    count();
    count();

    return 0;
}