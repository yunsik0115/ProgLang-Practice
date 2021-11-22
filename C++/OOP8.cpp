// Default Constructor
/*
 * Does not expect any arguments, no-args constructor
 * If your write no constructors at all for a class
 * C++ will generate a default constructor that does nothing
 * Called when you instantiate a new object with no arguments
 *
 * example
 * Player Frank;
 * Player *enemy = new Player;*/

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
    /*Player() { // Default Initializer user-defined
        name = "None";
        health = 100;
        xp = 3;
    }*/
    Player(std::string name_val, int health_val, int xp_val){
        name = name_val;
        health = health_val;
        xp = xp_val;
    }
};

int main(){
    Player frank; // C++ Provides Default No args Constructor. If there is no user-defined constructor.
    // If no args constructor not implemented but n args instructor implemented then object declaration without
    // arguments will be prohibited and cause an error
    frank.set_name("Frank");
    cout << frank.get_name() << endl;
    return 0;
}