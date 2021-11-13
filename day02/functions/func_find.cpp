#include "config.h"

int findMax(int arr[], int len) {
    int maxVal = arr[0]; //맨 앞 숫자 최대값으로 설정
    for (int i = 1; i < len; i++) {
        if (maxVal < arr[i]) maxVal = arr[i];
    }
    return maxVal;
}

char findChar(char str[]) {
    char maxChar = str[0];
    for (int i = 1; i < strlen(str); i++)
        if (maxChar < str[i]) maxChar = str[i];
    return maxChar;
}
