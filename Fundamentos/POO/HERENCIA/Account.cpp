#include <iostream>
#include "Account.h"
using namespace std;
#include <string>


Account::Account() : name{"An account"}, balance{0.0}{

}

Account::~Account(){

}

void Account::deposit(double amount) {
    cout << "Account deposit called with" << amount << endl;
}

void Account::withdraw(double amount) {
    cout << "Account withdraw called with" << amount << endl;
}