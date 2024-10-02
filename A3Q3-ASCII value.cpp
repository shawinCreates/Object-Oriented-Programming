/*3.	Write a C++ program to print ASCII value of all characters.*/
#include <iostream>
using namespace std;

int main() {
    // Loop through ASCII values from 0 to 255
    for (int i = 0; i <= 255; ++i) {
        cout << "Character: " << char(i) << " ASCII Value: " << i << endl;
    }

    return 0;
}

