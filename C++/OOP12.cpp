#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{
private:
    std::string name;
    int health;
    int xp;

public:
    std::string get_name() {return name;}
    int get_health() {return health;}
    int get_xp() {return xp;}
    Player(std::string name_val="None", int health_val = 0, int xp_val = 0);
    // 3 args constructors

    // Copy Constructors
    Player(const Player &source);

    // Destructor
    ~Player() {cout<<"Destructor called for : " << name << endl;}
};


Player :: Player (std::string name_val, int health_val, int xp_val)
        : name{name_val}, health{health_val}, xp{xp_val}
{
    cout << "3 args constructor" << endl;
}
// Initializer

Player::Player(const Player &source)
    : name(source.name), health(source.health), xp(source.xp){
    // copy constructor
    cout << "Copy Constructor - made copy of : "<< source.name << endl;
}

void display_player(Player p){
    cout << "Name : " << p.get_name() << endl;
    cout << "Health : " << p.get_health() << endl;
    cout << "XP : " << p.get_xp() << endl;
}

int main(){
    Player empty("XXXXX", 10, 5);

    Player my_new_object {empty};

    display_player(empty);
    // 함수 종료 이후에도 destructor 출력하지 않으면 메모리 낭비일수도 있다....!

    Player frank("frank");
    Player hero("Hero", 100);
    Player villain("villain",10,55);

    return 0;
}