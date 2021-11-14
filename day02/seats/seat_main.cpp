#include "seat.h"

int main() {

    int customNum, colNum, rowNum;

    cout << "입장객 수 입력 : ";
    cin >> customNum;

    cout << "좌석 열 수 입력 : ";
    cin >> colNum;

    getSeat(customNum, colNum);

    return 0;
}