#include <iostream>
using namespace std;

void printValue(int x , int y = 1, int z = 2) {
    cout << "x = " << x << ", y = " << y 
         << ", z = " << z << endl;
}

void printStr(string str1, string str2="unnamed") {
    cout << str1 << ", " << str2 << endl;
}
//함수의 기본 매개 변수(default parameter)
//뒤의 매개변수부터 값이 채워져야 함( int z -> 오류)

int main() {

    printValue(1);

    printValue(1, 2);

    printValue(1, 2, 3);

    printStr("ok");

    printStr("ok", "go");

    return 0;
}