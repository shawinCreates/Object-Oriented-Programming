/*4.	Create a class Number with two int instance variable x and y. The class will have one constructor. 
The class also will contain member function getMax() that will return larger number. 
In  main function create an object of Number and will print the larger number.*/
#include <iostream>
using namespace std;

class Number {
private:
    int x, y;

public:
    // Constructor to initialize x and y
    Number(int a, int b) {
        x = a;
        y = b;
    }

    // Member function to get the larger number
    int getMax() {
        return (x > y) ? x : y;
    }
};

int main() {
    int num1, num2;

    // Input two numbers from the user
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Create an object of the Number class
    Number numberObj(num1, num2);

    // Get and print the larger number
    int maxNumber = numberObj.getMax();
    cout << "The larger number is: " << maxNumber << endl;

    return 0;
}

