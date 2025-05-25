#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"
using namespace std;

int main() {
    cout << "=== Account Test ===" << endl;
    Account acc;
    acc.deposit(100.0);
    acc.withdraw(50.0);

    cout << "\n=== SavingsAccount Test ===" << endl;
    SavingsAccount sav_acc;
    sav_acc.deposit(200.0);
    sav_acc.withdraw(100.0);

    return 0;
}
