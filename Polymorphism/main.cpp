#include <iostream>
#include <list>
#include <cmath>

using namespace std;

class Animal {
public:
    void animalSound() {
        cout << "Fuck! Fuck!! Fuck!!!" << endl;
    }
};

class Pig : public Animal {
public:
    void animalSound() {
        cout << "I'm a pig, kiss me." << endl;
    }
};

class Dog : public Animal {
public:
    void animalSound() {
        cout << "I wanna eat pork!!" << endl;
    }

};

int main() {
    Animal animal;
    Pig pig;
    Dog dog;
    animal.animalSound();
    pig.animalSound();
    dog.animalSound();
    return 0;
}
