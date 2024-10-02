/*6.Create a class Swapper class with two integer instance variablex and y and constructor with two parameters 
that initializes the two variables. Also include three member functions: A getX () that returns x, a getY () 
function that returns y, a void swap () method that swaps the values of x and y. Then define a main() function
 to create an object of Swapper class and swap the value of instance variables*/
#include <iostream>
using namespace std;

class Swapper {
private:
    int x, y;

public:
    // Constructor to initialize x and y
    Swapper(int a, int b) {
        x = a;
        y = b;
    }

    // Member function to get the value of x
    int getX() {
        return x;
    }

    // Member function to get the value of y
    int getY() {
        return y;
    }

    // Member function to swap the values of x and y
    void swap() {
        int temp = x;
        x = y;
        y = temp;
    }
};

int main() {
    int num1, num2;

    // Input two numbers from the user
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Create an object of the Swapper class
    Swapper swapperObj(num1, num2);

    // Display the initial values of x and y
    cout << "Initial values - x: " << swapperObj.getX() << ", y: " << swapperObj.getY() << endl;

    // Swap the values of x and y
    swapperObj.swap();

    // Display the swapped values of x and y
    cout << "Swapped values - x: " << swapperObj.getX() << ", y: " << swapperObj.getY() << endl;

    return 0;
}

