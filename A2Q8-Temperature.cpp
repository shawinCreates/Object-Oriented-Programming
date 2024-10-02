/*8.	Write a C++program that reads temperature in degree Celsius and convert it into Fahrenheit.*/
#include <iostream>
using namespace std;
int main() {
    double celsius, fahrenheit;

    cout << "Enter the temperature in degrees Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9.0/5.0) + 32;

    cout << "Temperature in Fahrenheit: " << fahrenheit << "F" << endl;

    return 0;
}

