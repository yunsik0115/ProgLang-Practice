#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
public:
    // attributes
    string name;
    // string name{"Player"} Can be initialized as default.
    int xp;
    int health;

    // methods
    void talk(string text_to_say){
        cout << name << " says " << text_to_say << endl;
    }
    bool is_dead();
};

class Account{
public:
    // attributes
    string name;
    double balance;

    // methods    // function prototype requires function implementation therefore
    bool deposit(double bal){
        balance += bal;
        cout << "In deposit" << endl;
    }
    bool withdraw(double bal){
        balance -= bal;
        cout << "In withdraw" << endl;
    }
};

int main() {
    Account frank_account;
    Account jim_account;
    frank_account.name = "Frank's Account";
    frank_account.balance = 5000.0;

    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);

    Player frank;
    Player jim;

    // How to Access Object?
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12; // by using dot operator.
    frank.talk("Hi there"); // Must Implement the Function.

    Player *enemy = new Player; // Object Declaration via Pointer
    // 1) Dereference Enemy
    (*enemy).name = "enemy";
    (*enemy).health = 100;

    // 2) Use Arrow Operator
    enemy -> xp = 15;
    enemy -> talk("I will destory you");

    return 0;
}
