#include <iostream>
#include <string>
using namespace std;

// Define an employee structure
struct Employee {
    int emp_id;
    string name;
    int house_no;
    string area;
    string city;
    string state;
};

int main() {
    // Create an array of 3 employee structures
    Employee employees[3];

    // Get employee data from user input
    for (int i = 0; i < 3; i++) {
        cout << "Enter details for employee " << i+1 << ":\n";
        cout << "Employee ID: ";
        cin >> employees[i].emp_id;
        cin.ignore();
        cout << "Name: ";
        getline(cin, employees[i].name);
        cout << "House No.: ";
        cin >> employees[i].house_no;
        cin.ignore();
        cout << "Area: ";
        getline(cin, employees[i].area);
        cout << "City: ";
        getline(cin, employees[i].city);
        cout << "State: ";
        getline(cin, employees[i].state);
        cout << endl;
    }

    // Get employee ID from user input
    int search_id;
    cout << "Enter employee ID to search for: ";
    cin >> search_id;

    // Search for employee by ID and display employee data
    bool found = false;
    for (int i = 0; i < 3; i++) {
        if (employees[i].emp_id == search_id) {
            cout << "Employee found:\n";
            cout << "Employee ID: " << employees[i].emp_id << endl;
            cout << "Name: " << employees[i].name << endl;
            cout << "House No.: " << employees[i].house_no << endl;
            cout << "Area: " << employees[i].area << endl;
            cout << "City: " << employees[i].city << endl;
            cout << "State: " << employees[i].state << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Employee with ID " << search_id << " not found.\n";
    }

    return 0;
}