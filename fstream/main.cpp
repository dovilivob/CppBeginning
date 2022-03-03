//  ofstream: Creates and writes to files.
//  ifstream: Read from files.
//  fstream: creates, reads, and writes to files.

#include <iostream>
#include <fstream>

using namespace std;

int main() {
//    Create ./cmake-build-debug/Testing/file.txt
    ofstream myFile("file.txt");
    myFile << "Something";
    myFile.close();

//    Read a file
    string txt;
    ifstream myReadFile("file.txt");
//    Using while loop with getline() to read line by line.
    while(getline(myReadFile, txt)){
        cout << txt;
    }
    myReadFile.close();
    return 0;
}
