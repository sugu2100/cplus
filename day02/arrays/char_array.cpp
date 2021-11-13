#include <iostream>
using namespace std;

int main() {
    char alphabets[26];
    char ch = 'a';

    //저장
    for (int i = 0; i < 26; i++) {
        alphabets[i] = ch;  //문자를 배열에 저장
        ch++;
    }

    //출력
    for (int i = 0; i < 26; i++) {
        cout << alphabets[i] << ", " << (int)alphabets[i] << endl;
    }
    return 0;
}