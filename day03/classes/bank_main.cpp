#include "bank_account.h"

int main() {
    //°´Ã¼ »ı¼º
    BankAccount ba2 = BankAccount("20-1234", "¼ÕÈï¹Î", 3000);

    //Ãâ·Â

    cout << "°èÁÂ ¹øÈ£ : " << ba2.getAno() << endl;
    cout << "°èÁÂÁÖ : " << ba2.getOwner() << endl;
    cout << "ÀÜ°í : " << ba2.getBalance() << endl;

    return 0;
}