#include "bank_account.h"

int main() {
	//��ü �迭 ����
	BankAccount ba[3] = {
		BankAccount("10-1234", "�Ȼ�", 1000),
		BankAccount("20-1234", "�����", 3000),
		BankAccount("30-1234", "������", 4000),
	};

	//���
	for (int i = 0; i < 3; i++) {
		cout << "���� ��ȣ : " << ba[i].getAno() << endl;
		cout << "������ : " << ba[i].getOwner() << endl;
		cout << "�ܰ� : " << ba[i].getBalance() << endl;
	}

	return 0;
}