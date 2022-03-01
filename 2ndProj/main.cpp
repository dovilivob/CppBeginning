#include <iostream>
#include <list>

using namespace std;

class Person {
public:
    string Name;
    string Gender;
    int Age;
    list<string> Friends;
};

int main() {
    Person David;
    David.Name = "David";
    David.Gender = "Male";
    David.Age = 20;
    David.Friends = {"David", "Noah"};
}