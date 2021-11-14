#include "bank_account.h"

int main() {
    //객체 생성
    BankAccount ba1 = BankAccount();

    //자료 입력
    ba1.setAno("10-1234");
    ba1.setOwner("안산");
    ba1.setBalance(1000);

    //출력
    cout << "계좌 번호 : " << ba1.getAno() << endl;
    cout << "계좌주 : " << ba1.getOwner() << endl;
    cout << "잔고 : " << ba1.getBalance() << endl;

    return 0;
}