// Implementing member methods

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Account {
private:
    string name;
    double balance;
public: // inside the class declaration
    void set_balance(double bal){
        balance = bal;
    }
    double get_balance() {
        return balance;
    }

    void set_name(string n);
    string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};

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

// outside the class declaration
/*
 * then function prototype must be declared inside of the class
 * void Account::set_balance(double bal){
 *      balance = bal;
 * }
 *
 * double Account::get_balance() {
 *      return balance;
 *  }
 * */

int main(void){
    Account frank_account;
    frank_account.set_name("Frank's Account");
    frank_account.set_balance(1000.00);

    if(frank_account.deposit(200))
        cout << "Deposit OK" << endl;
    else
        cout << "Deposit Not Allowed" << endl;

    if(frank_account.withdraw(500.0))
        cout << "Withdrawl OK" << endl;
    else
        cout << "Not Sufficient funds" << endl;

    if(frank_account.withdraw(1500.0))
        cout << "Withdrawl OK" << endl;
    else
        cout << "Not Sufficient funds" << endl;
    return 0;
}
