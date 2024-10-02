/*6.	Write a C++ program to find GCD and LCM of two numbers*/
#include <iostream>
using namespace std;

// Function to calculate GCD of two numbers
int calculateGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return calculateGCD(b, a % b);
}

// Function to calculate LCM of two numbers
int calculateLCM(int a, int b) {
    return (a * b) / calculateGCD(a, b);
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 < 1 || num2 < 1) {
        cout << "Invalid input. Please enter positive integers." << endl;
        return 1;
    }

    int gcd = calculateGCD(num1, num2);
    int lcm = calculateLCM(num1, num2);

    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << endl;
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;

    return 0;
}

