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
    int age;

//    Constructor
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
    cout << "And also, I like " << getFood() << "!";
}

Person::Person(string _name, int _age, string _gender) {
    name = _name;
    age = _age;
    gender = _gender;
}

int main() {
    Person David("David", 20, "Male");
    David.setFood("Pizza");
    David.print();
    return 0;
}
