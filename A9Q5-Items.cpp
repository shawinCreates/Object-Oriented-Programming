/*5.	Write a program to write records of 5 items in file 'item.dat'. 
Item class should contain data members code and price.*/
#include <iostream>
#include <fstream>

using namespace std; // Declare the use of the std namespace

class Item {
public:
    int code;
    float price;

    void getDetails() {
        cout << "Enter Item Code: ";
        cin >> code;
        cout << "Enter Item Price: ";
        cin >> price;
    }
};

int main() {
    Item items[5];

    // Create and open the file 'item.dat' for writing
    ofstream outFile("item.dat");

    if (!outFile) {
        cerr << "Error opening file for writing!" << endl;
        return 1;
    }

    // Get details for 5 items and write them to the file
    for (int i = 0; i < 5; i++) {
        cout << "Enter details for Item " << i + 1 << ":" << endl;
        items[i].getDetails();
        outFile.write((char*)&items[i], sizeof(Item));
    }

    // Close the file
    outFile.close();

    cout << "Records written to 'item.dat' successfully." << endl;

    return 0;
}

