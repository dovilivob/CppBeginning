//  try: Allows you to define a block of code to be tested for errors while it's being executed.
//  throw: Throws an exception when a problem is detected, which lets us create a custom error.
//  catch: Allows you to define a block of code to be executed, if an error occurs in the try block.

//  try & catch keywords come is pairs.

#include <iostream>

using namespace std;

int main() {
    try {
        int age;
        cin >> age;
        if (age >= 18) {
            cout << "Access granted - You're old enough.";
        } else {
            throw (age);
        }
    } catch (int num) {
        cout << "Access denied - You must be an adult to watch porn.\n";
        cout << "Your age: " << num;
    } catch (...) {
//        Using catch(...) to handle every type of Exceptions.
        cout << "Something Wrong...";
    }
}
