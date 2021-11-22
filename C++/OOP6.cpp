#include <iostream>
#include <string>
#include <vector>
#include "OOP6.h"

using namespace std;

void Account::set_name(string n){
    name = n;
}

bool Account::deposit(double amount){
    //if verify amount
    balance += amount;
    return true;
}

bool Account::withdraw(double amount){
    if(balance - amount >=0 ){
        balance -= amount;
        return true;
    }
    else{
        return false;
    }
}

int main(void){
    Account frank_account;
    frank_account.set_name("Frank's Account");
    frank_account.set_balance(1000.00);

    if(frank_account.deposit(200))
        cout << "Deposit OK" << endl;
    else
        cout << "Deposit Not Allowed" << endl;

    if(frank_account.withdraw(500.0))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Not Sufficient funds" << endl;

    if(frank_account.withdraw(1500.0))
        cout << "Withdrawl OK" << endl;
    else
        cout << "Not Sufficient funds" << endl;
    return 0;
}


