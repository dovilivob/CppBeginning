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
    Person() {
        cout << "Hello you sucker..." << endl;
    }


//    Declaration
    Person(string _name);

    Person(string _name, int _age, string _gender);

    void print();

//    Setter && Getter
    void setFood(string _food) {
        food = _food;
    }

    string getFood() {
        return food;
    }

protected:
//    Members cannot be accessed from outside the class, but inherited classes are Ok.
    double length;
};

//    Definition
void Person::print() {
    cout << "My name is " << name << ", I'm a " << age << "-year-old " << gender << "." << endl;
    cout << "And also, I like " << getFood() << "!" << endl;
}

Person::Person(string _name, int _age, string _gender) {
    name = _name;
    age = _age;
    gender = _gender;
}

Person::Person(string _name) {
    name = _name;
}

//  Inheritance
//  Child
class Man : public Person {
public:
    string habit = "Masturbation";

//    Inherit Constructor
    Man(string name) : Person(name) {
        gender = "Male";
    }

    static void hey();
};

//  GrandChild
class Dick : public Man {
public:
//    double length;

    Dick(string name) : Man(name) {
        gender = "Female";
        length = 0.02;
    }

    void setLength(double n) {
        length = n;
    }

    double getLength() {
        return length;
    }

    static void fuck();
};

void Man::hey() {
    cout << "Hey, I'm a man!!!" << endl;
}

void Dick::fuck() {
    cout << "Ahh... I've cum..." << endl;
}

class ManWithDick : public Man, public Dick {
public:
    ManWithDick(string name) : Man(name), Dick(name) {}
};


int main() {
    Person David("David", 20, "Male");
    David.setFood("Pizza");
    David.print();
    Man Wayne("Wayne");
    Wayne.setFood(Wayne.habit);
    Wayne.age = 21;
    Wayne.print();
    Dick lilWayne("lilWayne");
    lilWayne.hey();
    lilWayne.setLength(.001);
    cout << lilWayne.getLength() << ", " << lilWayne.gender << endl;
    ManWithDick Jerry("Jerry");
    Jerry.hey();
    Jerry.fuck();
    return 0;
}
