//5.	Write aC++ program that will obtain the length and width of a rectangle from the user and compute its area and perimeter.
#include <iostream>
using namespace std;
int main() {
    double length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    double area = length * width;
    double perimeter = 2 * (length + width);

    cout << "Area of the rectangle: " << area << endl;
    cout << "Perimeter of the rectangle: " << perimeter << endl;

    return 0;
}

