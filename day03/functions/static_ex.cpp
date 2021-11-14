#include <iostream>
using namespace std;

void count() {
    int x = 0;         //지역 변수
    static int y = 0;  //정적 변수(프로그램이 종료되어야 해제됨)
    x += 1;
    y += 1;
    cout << "x = " << x << ", y = " << y << endl;
}

int main() {

    count();
    count();

    return 0;
}