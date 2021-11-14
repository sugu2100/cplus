#include <iostream>
using namespace std;

int main() {
    //1부터 10까지 출력 - 5와 6을 제외하고 출력
    /*for (int i = 1; i <= 10; i++) {
        if (i == 5 || i == 6)
            continue;   //아래로 내려오지 다시 위로 올려보냄
        cout << i << endl;
    }*/

    //1부터 10까지의 홀수의 합
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