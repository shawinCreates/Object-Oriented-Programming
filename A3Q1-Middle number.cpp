/* 1.	Write a C++ program to find the second largest number (or middle) among three numbers.*/
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2 && num1 >= num3) {
        if (num2 >= num3) {
            cout << "The second largest number is: " << num2 << endl;
        } else {
            cout << "The second largest number is: " << num3 << endl;
        }
    } else if (num2 >= num1 && num2 >= num3) {
        if (num1 >= num3) {
            cout << "The second largest number is: " << num1 << endl;
        } else {
            cout << "The second largest number is: " << num3 << endl;
        }
    } else {
        if (num1 >= num2) {
            cout << "The second largest number is: " << num1 << endl;
        } else {
            cout << "The second largest number is: " << num2 << endl;
        }
    }

    return 0;
}


