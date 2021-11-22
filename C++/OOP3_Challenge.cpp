#include <iostream>
#include <string>

class Dog {
public:
    std::string name;
    int age;
};

int main(){
    Dog dog;

    dog.name = "Spot";
    dog.age = 5;

    return 0;
}

