#include <iostream>
using namespace std;

class BankAccount{
	string ano;    //���� ��ȣ
	string owner;  //������
	int balance;   //�ܰ�

public:
	BankAccount();  //main���� ��������Ƿ� ����ؾ���
	BankAccount(string a, string own, int bal);
	~BankAccount();  //�Ҹ���

	void setAno(string ano);
	string getAno();
	void setOwner(string owner);
	string getOwner();
	void setBalance(int balance);
	int getBalance();
};