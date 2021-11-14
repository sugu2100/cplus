#include "bank_account.h"

BankAccount::BankAccount() {};

BankAccount::BankAccount(string a, string own, int bal) {
	ano = a;
	owner = own;
	balance = bal;
}

BankAccount::~BankAccount() {}

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