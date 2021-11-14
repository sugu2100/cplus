#include "dog.h"

int main() {
    //객체 생성 및 저장
    Dog dog1 = Dog();
    Dog dog2 = Dog("불독", "yellow", 2);

    //출력
    dog1.dogInfo();
    dog2.dogInfo();

    return 0;
}