#include "bank_account.h"

int main() {
    //��ü ����
    BankAccount ba2 = BankAccount("20-1234", "�����", 3000);

    //���

    cout << "���� ��ȣ : " << ba2.getAno() << endl;
    cout << "������ : " << ba2.getOwner() << endl;
    cout << "�ܰ� : " << ba2.getBalance() << endl;

    return 0;
}