#include <iostream>
#include <ctime>

using namespace std;

void PlayGame() {
    cout << "You're a secret agent breaking into a secure server room..." << endl;
    cout << "Enter the correct code to continue..." << endl;

    const int AnsA = 4, AnsB = 3, AnsC = 2;

    const int AnsSum = AnsA + AnsB + AnsC;
    const int AnsProduct = AnsA * AnsB * AnsC;

    cout << "+ There are 3 numbers in the code" << endl;
    cout << "+ The code add-up to: " << AnsSum << endl;
    cout << "+ The code multiply to give: " << AnsProduct << endl;

//    You can just enter like 3 2 1 without newline
    int GuessA, GuessB, GuessC;
    cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;
    if (GuessSum == AnsSum && GuessProduct == AnsProduct) {
        cout << "You Win!!!" << endl;
    } else {
        cout << "You Sucker!!!" << endl;
    }
}

void PlayGameAtDifficulty(int difficulty) {

}

int main() {
    while(true)
    {
        PlayGame();
        cin.clear(); // Clears any errors
        cin.ignore(); // Discards the buffer
    }
    return 0;
}
