/*10.	Write a C++ program to find cubes and squares of first 10 natural numbers.*/
#include <iostream>
using namespace std;

int main() {
    cout << "Number\tSquare\tCube" << endl;

    for (int i = 1; i <= 10; ++i) {
        int square = i * i;
        int cube = i * i * i;

        cout << i << "\t" << square << "\t" << cube << endl;
    }

    return 0;
}

