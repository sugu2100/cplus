#include "bank_account.h"

int main() {
    //��ü ����
    BankAccount ba1 = BankAccount();

    //�ڷ� �Է�
    ba1.setAno("10-1234");
    ba1.setOwner("�Ȼ�");
    ba1.setBalance(1000);

    //���
    cout << "���� ��ȣ : " << ba1.getAno() << endl;
    cout << "������ : " << ba1.getOwner() << endl;
    cout << "�ܰ� : " << ba1.getBalance() << endl;

    return 0;
}