//2.	Given three numbers, write a  C++ program to read three numbers from keyword and print out the largest of them without using if statement.
#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int largest = num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

    cout << "The largest number is: " << largest << std::endl;

    return 0;
}

