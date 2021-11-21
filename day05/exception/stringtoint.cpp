/*#include <iostream>
using namespace std;

int stringToInt(const char x[]) { //'29'가 입력
    int sum = 0;
    for (int i = 0; i < strlen(x); i++) {
        if (x[i] >= '0' && x[i] <= '9')
            sum = sum * 10 + x[i] - '0';
        else
            throw x;  //숫자가 아닌 경우, 예외 발생
    }
    //29입력 
    //i = 0, 0 * 10 + 2 -> 2
    //i = 1, 2 * 10 + 9 -> 9
    return sum;
}*/


int main() {
    //문자열을 정수로 변환하기

    int n;
    try{
        n = stringToInt("25");
        cout << "\" 25 \" 는 정수" << n << " 로 변환됨" << endl;

        n = stringToInt("2a");
        cout << "\" 2a \" 는 정수" << n << endl;
        }
    catch (const char* s) {
        cout << s << " 처리에서 예외 발생" << endl;
    }

    return 0;
}