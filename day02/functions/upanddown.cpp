#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    /*upand down 게임
    추측한 숫자가 맞으면 "정답입니다.", break
    게이머 숫자가 컴보다 크면 "너무 커요", 반복
    게이머 숫자가 컴보다 작으면 "너무 작아요"
    */

    int com, guess, min = 1, max = 100, i;

    srand((unsigned)time(NULL));  //0~43억
    com = rand() % 100 + 1;   //컴 추측 숫자

    for (i = 0; i < 10; i++) {
        cout << "[" << i + 1 << "회]" << min << " ~ " << max << " 사이의 값 예측 => ";
        cin >> guess;

        //조건 처리
        if (guess == com) {
            cout << "정답입니다!" << endl;
            break;
        }
        else if (guess > com) {
            cout << "너무 커요!" << endl;
            max = guess;
        }
        else {
            cout << "너무 작아요!" << endl;
            min = guess;
        }
    }
    cout << "정답 : " << com << endl;
    cout << "최종 점수 : " << (10 - i) * 10 << endl;

    return 0;
}