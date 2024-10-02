/*5.	Write a C++ program to evaluate the series S = 1+2*1+3*2+……………………N*N-1.*/
#include <iostream>
using namespace std;

int main() {
    int N;
    double S = 0.0;

    cout << "Enter the value of N: ";
    cin >> N;

    if (N < 1) {
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 1;
    }

    cout << "Series: ";
    for (int i = 1; i <= N; ++i) {
        S += i * (i - 1);
        cout << i << "*" << (i - 1);
        if (i < N) {
            cout << " + ";
        }
    }

    cout << endl << "Sum of the series: " << S << endl;

    return 0;
}

