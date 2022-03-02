#include <iostream>
#include <list>
#include <cmath>

using namespace std;

class Person {
//    By default, all members of a class are private.
private:
    string food;

public:
//    Variables
    string name;
    string gender;
    string species = "Human";
    int age;

//    Constructor
    Person(string _name);
    Person(string _name, int _age, string _gender);
//    Function
    void print();

//    Setter
    void setFood(string _food) {
        food = _food;
    }

//    Getter
    string getFood() {
        return food;
    }
};

void Person::print() {
    cout << "My name is " << name << ", I'm a " << age << "-year-old " << gender << "." << endl;
    cout << "And also, I like " << getFood() << "!" << endl;
}

Person::Person(string _name, int _age, string _gender) {
    name = _name;
    age = _age;
    gender = _gender;
}
Person::Person(string _name){
    name = _name;
}

class Man : public Person {
public:
    string habit = "Masturbate";
    Man(string _name): Person(name){
        name = _name;
    }
};

int main() {
    Person David("David", 20, "Male");
    Man Wayne("Wayne");
    David.setFood("Pizza");
    David.print();
    cout << Wayne.species;
    return 0;
}
