#include "bank_account.h"

void BankAccount::setAno(string a) {
	ano = a;
}

string BankAccount::getAno() {
	return ano;
}

void BankAccount::setOwner(string own) {
	owner = own;
}

string BankAccount::getOwner() {
	return owner;
}

void BankAccount::setBalance(int bal) {
	balance = bal;
}

int BankAccount::getBalance() {
	return balance;
}