/*7.	Write a C++program to count number of digits in a number.*/
#include <iostream>
using namespace std;

int main() {
    int num, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        num = -num; // Convert negative number to positive for counting digits
    } else if (num == 0) {
        count = 1; // Special case for number 0
    }

    while (num > 0) {
        num /= 10; // Remove the last digit
        count++;
    }

    cout << "Number of digits: " << count << endl;

    return 0;
}

