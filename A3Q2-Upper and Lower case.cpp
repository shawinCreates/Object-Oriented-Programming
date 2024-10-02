/*2.	Write a C++ program to read a character from keyboard and convert it into uppercase
 if it is in lowercase and vice versa.*/
 #include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        // Convert to uppercase
        ch = ch - 32;
    } else if (ch >= 'A' && ch <= 'Z') {
        // Convert to lowercase
        ch = ch + 32;
    }
    cout << "Converted character: " << ch << endl;

    return 0;
}

