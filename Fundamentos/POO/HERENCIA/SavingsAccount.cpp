#include <iostream>
#include "SavingsAccount.h"
using namespace std;

SavingsAccount::SavingsAccount(): int_rate{3.0}{

}

SavingsAccount::~SavingsAccount(){
    
}

void SavingsAccount::deposit(double amount) {
    cout << "Account deposit called with" << amount << endl;
}

void SavingsAccount::withdraw(double amount) {
    cout << "Account withdraw called with" << amount << endl;
}