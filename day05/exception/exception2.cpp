/*#include <iostream>
using namespace std;

int main() {
    //0으로 나누었을때의 예외처리
    //try ~ catch 구문 : throw로 예외 처리구문으로 보냄
    int n1, n2;
    int quotient;

    try {
        cout << "수1 : ";
        cin >> n1;

        cout << "수2 : ";
        cin >> n2;

        if (n2 == 0)  //예외 발생
            throw n1; //catch로 던짐

        quotient = n1 / n2;
        cout << "몫 : " << quotient;
    }
    catch (int e_n) {
        cout << e_n << "은 0으로 나눌 수 없습니다.!!" << endl;
    }


    return 0;
}*/