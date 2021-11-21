#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int x, int y) { return x + y; }

protected:   //상속시엔 접근지정자를 private -> protected 로 변경
    int sub(int x, int y) { return x - y; }

private:
    int mul(int x, int y) { return x * y; }
};

class MyCalculator : public Calculator {
    double div(int x, int y) { return x / y; }

public:
    void access() {
        cout << add(10, 4) << endl;
        cout << sub(10, 4) << endl;
        //cout << mul(10, 4) << endl;  //private으로 접근 불가
        cout << div(10, 4) << endl;    //자신의 멤버이름 private도 접근 가능
    };
};


int main() {
    MyCalculator calc = MyCalculator();
    calc.access();

    return 0;
}