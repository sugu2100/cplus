#include <iostream>
using namespace std;

class BankAccount{
	string ano;    //계좌 번호
	string owner;  //계좌주
	int balance;   //잔고

public:
	BankAccount();  //main에서 사용했으므로 명시해야함
	BankAccount(string a, string own, int bal);
	~BankAccount();  //소멸자

	void setAno(string ano);
	string getAno();
	void setOwner(string owner);
	string getOwner();
	void setBalance(int balance);
	int getBalance();
};