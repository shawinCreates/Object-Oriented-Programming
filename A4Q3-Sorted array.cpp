/*3.	Write a program that creates an integer array and then uses a for loop to check whether the array is 
sorted from smallest to largest. If so, print sorted. Otherwise, prints "Not sorted*/
#include <iostream>
using namespace std;

int main() {
    int length;
    
    // Ask the user for the length of the array
    cout << "Enter the length of the integer array: ";
    cin >> length;

    // Create an integer array based on user input
    int arr[length];

    // Ask the user to input the array elements
    cout << "Enter " << length << " integer elements:" << endl;
    for (int i = 0; i < length; ++i) {
        cin >> arr[i];
    }

    // Initialize a flag to check if the array is sorted
    bool isSorted = true;

    // Check if the array is sorted from smallest to largest
    for (int i = 1; i < length; ++i) {
        if (arr[i] < arr[i - 1]) {
            isSorted = false;
            break; // Exit the loop early if not sorted
        }
    }

    // Check the flag and print the result
    if (isSorted) {
        cout << "Sorted" << endl;
    } else {
        cout << "Not sorted" << endl;
    }

    return 0;
}

