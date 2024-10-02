/*2.	Write a program that creates two integer arrays data1 and data2, possibly of different lengths.
 Then it uses for loops to create a new array data3 whose length is the sum of the lengths of data1 and data2 
 and whose contents consists of the contents of data1 followed by contents of data2. 
For example, if the two arrays are {1,2,3} and {4,5,6,7}, then the code should create the new array {1,2,3,4,5,6,7}.*/
#include <iostream>
using namespace std;

int main() {
    // Create and initialize two integer arrays, data1 and data2
    int data1[] = {1, 2, 3};
    int data2[] = {4, 5, 6, 7};

    // Calculate the lengths of data1 and data2
    int length1 = sizeof(data1) / sizeof(data1[0]);
    int length2 = sizeof(data2) / sizeof(data2[0]);

    // Calculate the length of the new array, data3
    int length3 = length1 + length2;

    // Create a new integer array, data3, with length3
    int data3[length3];

    // Copy the contents of data1 into data3
    for (int i = 0; i < length1; ++i) {
        data3[i] = data1[i];
    }

    // Copy the contents of data2 into data3
    for (int i = 0; i < length2; ++i) {
        data3[length1 + i] = data2[i];
    }

    // Print the contents of data3
    cout << "Contents of data3: ";
    for (int i = 0; i < length3; ++i) {
        cout << data3[i] << " ";
    }
    cout << endl;

    return 0;
}

