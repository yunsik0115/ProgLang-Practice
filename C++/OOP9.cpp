// Constructor Initialization List

/*
 * class Player
 * {
 *  private:
 *      std::string name;
 *      int health;
 *      int xp;
 *  public:
 *      // Overloaded Constructors
 *      Player();
 *      Player(std::string name_val);
 *      Player(std::string name_val, int health_val, int xp_val);
 * }
 *
 * No args Constructor Previous way Implementation
 * Player :: Player() {
 *  name = "None" // it's assignment not initialization
 *  health = 0;
 *  xp = 0;
 *  }
 *
 *  Better Way Implementation of No args Constructor
 *  Player :: Player()
 *      : name{"None"}, health{0}, xp{0}
 *      // This happens before the body of the constructor is ever executed
 *      // The order in which the members are initialized is not necessarily the order we provide in the initialization list.
 *      // Class Declaration 순서대로 선언됨.
 *      {
 *      }
 * */

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

Player :: Player() :
        name {"none"}, health {0}, xp{0}{
}

Player :: Player (std::string name_val){
    name = name_val;
    health = 0;
    xp = 0;
}

Player :: Player (std::string name_val, int health_val, int xp_val){
    name = name_val;
    health = 0;
    xp = 0;
}

int main(){
    Player empty;
    Player frank("frank");
    Player villain("villain",10,55);

    return 0;
}