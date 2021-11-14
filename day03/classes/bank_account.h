#include <iostream>
using namespace std;

class BankAccount{
	string ano;    //°èÁÂ ¹øÈ£
	string owner;  //°èÁÂÁÖ
	int balance;   //ÀÜ°í

public:
	void setAno(string ano);
	string getAno();
	void setOwner(string owner);
	string getOwner();
	void setBalance(int balance);
	int getBalance();
};