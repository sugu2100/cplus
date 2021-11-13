/*#include <iostream>
#include <cstring> 
//#include <string.h>
using namespace std;

int main() {
    //문자열 함수를 사용한 배열
    char s1[] = "game", s2[20];

    //문자열의 개수
    cout << "s1의 개수 : " << strlen(s1) << endl;

    //문자열 복사(저장)
    //s2[] = "over";
    strcpy_s(s2, "over");
    cout << "s1 = " << s1 << ", s2 = " << s2 << endl;

    //문자열 비교
    cout << strcmp(s1, s2) << endl;  //다르고, 앞쪽이 작으면 -1
    cout << strcmp(s1, "game") << endl;  //같으면 0
    cout << strcmp("over", s1) << endl;  //다르고, 앞쪽이 크면 1

    return 0;
}*/