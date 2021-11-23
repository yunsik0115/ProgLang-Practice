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
    void set_name(std::string name_val){
        name = name_val;
    }
    std::string get_name(){
        return name;
    }
    Player();
    Player (std::string name_val);
    Player (std::string name_val, int health_val, int xp_val);
};


Player :: Player (std::string name_val, int health_val, int xp_val)
: name{name_val}, health{health_val}, xp{xp_val}
{
    cout << "3 args constructor" << endl;
}

Player :: Player() :
        Player("None",0,0){
    cout << "No args constructor" << endl;
}

Player :: Player (std::string name_val)
    : Player(name_val, 0, 0){
    cout << "2 args constructor" << endl;
}

int main(){
    Player empty;
    // 3 args constructor -> calls one args constructor
    // Initialization happens before the execution of the code inside the body.
    Player frank("frank");
    // 3 args constructor -> calls two args constructor
    Player villain("villain",10,55);

    return 0;
}