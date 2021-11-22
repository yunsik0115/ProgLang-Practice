// To know the Difference between private, public. Protected
// Difference between private and protected -> We'll know this on inheritance part.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
private:
    string name{"player"};
    int health;
    int xp;

public:
    void talk(string text_to_say) { cout << name << " says " << text_to_say << endl; };
    bool is_dead();
};

int main(){
    Player frank;
    // frank.name = "frank"; Accessing Private Variables directly is prohibited
    frank.talk("Hello There"); // Work Successfully
    return 0;
}