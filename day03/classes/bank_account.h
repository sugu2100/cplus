#include <iostream>
using namespace std;

class BankAccount{
	string ano;    //���� ��ȣ
	string owner;  //������
	int balance;   //�ܰ�

public:
	void setAno(string ano);
	string getAno();
	void setOwner(string owner);
	string getOwner();
	void setBalance(int balance);
	int getBalance();
};