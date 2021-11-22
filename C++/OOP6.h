// class declaration and separation via header files.
// include guards
#ifndef C___OOP6_H
#define C___OOP6_H
#include <string>
using namespace std;
class Account {
private:
    std::string name;
    double balance;
public:
    void set_balance(double bal) {balance = bal;}
    double get_balance() {return balance;}

    void set_name(string n);
    std::string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};

#endif //C___OOP6_H
