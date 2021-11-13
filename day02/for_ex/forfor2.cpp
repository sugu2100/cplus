#include <iostream>
using namespace std;

int main() {
    //1부터 증가하는 프로그램
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 1; j <= 4; j++) {
            int num = i * 4 + j;
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}