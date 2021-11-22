#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
    // attributes
    string name;
    // string name{"Player"} Can be initialized as default.
    int xp;
    int health;

    // methods
    void talk(string);
    bool is_dead();
};

class Account{
    // attributes
    string name;
    double balance;

    // methods    // function prototype requires function implementation therefore
    bool deposit(double);
    bool withdraw(double);
};

int main() {
    Account frank_account;
    Account jim_account;

    Player frank;
    Player jim;

    Player players[] {frank, jim}; // Array consists of Player Class
    vector<Player> players_vec {frank}; // Vector consists of Player Class
    players_vec.push_back(jim); // Characteristics of Vector

    Player *enemy {nullptr};
    enemy = new Player;
    delete enemy;

    return 0;
}
