#include <iostream>
#include <ctime>

using namespace std;

bool PlayGame(int Difficulty) {
    cout << "You're a secret agent breaking into a LEVEL" << Difficulty << " secure server room..." << endl;
    cout << "Enter the correct code to continue..." << endl;

    const int AnsA = rand() % (Difficulty * 2) + 1;
    const int AnsB = rand() % (Difficulty * 3) + 1;
    const int AnsC = rand() % (Difficulty * 4) + 1;

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
        return true;
    } else {
        cout << "You Sucker!!!" << endl;
        return false;
    }
}

void PlayGameAtDifficulty(int difficulty) {

}

int main() {
//    set time as random seed.
    srand(time(NULL));
    int LevelDifficulty = 1;
    while (true) {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        cin.clear(); // Clears any errors
        cin.ignore(); // Discards the buffer
        if (bLevelComplete) {
            ++LevelDifficulty;
        } else {
            exit(0);
        }
    }
    return 0;
}
