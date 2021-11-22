#include <iostream>
#include <string>
// Destructors & Constructors
/*Constructors
 * Special Member Method
 * Invoked during object creation
 * Useful for initialization.
 * Same name as the Class
 * No return type is specified
 * Can be Overloaded */

/*Destructors
 *Special Member Method
 *Same name as the class proceeded with a tilde(~)
 *Invoked automatically when an object is destroyed
 *No return type and no parameters
 * Only 1 destructor is allowed per class - cannot be overloaded
 * Useful to release memory and other resources*/
class Player{
private:
    std::string name;
    int health;
    int xp;

public:
    void set_name(std::string name_val){
        name = name_val;
    }
    // Overloaded Constructors
    Player()
    {
        cout << "No args Constructor called" << endl;
    }
    Player(std::string name)
    {
        cout << "String arg Constructor called" << endl;
    }
    Player(std::string name, int health, int xp)
    {
        cout << "Three args Constructor called" << endl;
    }
    //Destructor
    ~Player(){
        cout << "Destructor called for" << name << endl;
    }

};

class Account{
private:
    std::string name;
    double balance;
public:
    // Constructors
    Account();
    Account(std::string name, double balance);
    Account(std::string name);
    Account(double balance);
    ~Account();
};

int main(void){
    {
        Player slayer;
        slayer.set_name("slayer");
    }
    // then destructor initiated and slayer will be deleted

    {
        Player frank;
        frank.set_name("frank");
        Player hero{"Hero"};
        frank.set_name("hero");
        Player Villain{"Villain",100 ,12};
        frank.set_name("villain");
    }
    //destructor will be initiated in reverse order FILO


}