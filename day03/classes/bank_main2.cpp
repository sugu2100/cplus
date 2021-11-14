#include "bank_account.h"

int main() {
	//객체 배열 생성
	BankAccount ba[3] = {
		BankAccount("10-1234", "안산", 1000),
		BankAccount("20-1234", "손흥민", 3000),
		BankAccount("30-1234", "류현진", 4000),
	};

	//출력
	for (int i = 0; i < 3; i++) {
		cout << "계좌 번호 : " << ba[i].getAno() << endl;
		cout << "계좌주 : " << ba[i].getOwner() << endl;
		cout << "잔고 : " << ba[i].getBalance() << endl;
	}

	return 0;
}