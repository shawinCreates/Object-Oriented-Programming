#include <iostream>
#include <fstream>
using namespace std;

struct Employee {
    int eid;
    string name;
    double salary;
};

int main() {
    // Create an array to store employee details for 10 employees
    Employee employees[10];

    // Read employee details from the keyboard
    for (int i = 0; i < 10; i++) {
        cout << "Enter Employee ID: ";
        cin >> employees[i].eid;

        cout << "Enter Employee Name: ";
        cin.ignore(); // Clear the newline character in the input buffer
        getline(cin, employees[i].name);

        cout << "Enter Employee Salary: ";
        cin >> employees[i].salary;
    }

    // Open a file for writing
    ofstream outputFile("emp.doc");

    if (!outputFile.is_open()) {
        cerr << "Failed to open the file for writing." << endl;
        return 1;
    }

    // Write employee details to the file
    for (int i = 0; i < 10; i++) {
        outputFile << "Employee ID: " << employees[i].eid << endl;
        outputFile << "Employee Name: " << employees[i].name << endl;
        outputFile << "Employee Salary: " << employees[i].salary << endl << endl;
    }

    // Close the file
    outputFile.close();

    cout << "Employee details have been written to emp.doc." << endl;

    return 0;
}

