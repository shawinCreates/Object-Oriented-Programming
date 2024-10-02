/*4.	Write a C++ program to display the series: �  2/3  �  4/5  5/6�������..n-1/n*/
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    if (n < 1) {
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 1;
    }

    cout << "Series: ";
    for (int i = 1; i < n; i++) {
        cout << i << "/" << (i + 1);
        if (i < n - 1) {
            cout << ", ";
        }
    }

    cout << endl;

    return 0;
}

