#include<iostream>
#include<string>
using namespace std;

int main() {
    // Define a struct for students
    struct Student {
        int id;
        string name;
        string phn;
    };

    // Create an array of 5 Student objects
    Student b1[5];

    // Input information for each student
    for (int i = 0; i < 5; i++) {
        cout << "Enter the id: " << endl;
        cin >> b1[i].id;
        cout << "Enter the name: " << endl;
        cin.ignore(); // To consume the newline character left in the input buffer
        getline(cin, b1[i].name);
        cout << "Enter the phone number: " << endl;
        cin >> b1[i].phn;
    }

    // Output information for each student
    for (int j = 0; j < 5; j++) {
        cout << "Id: " << b1[j].id << endl;
        cout << "Name: " << b1[j].name << endl;
        cout << "Phone number: " << b1[j].phn << endl;
    }

    return 0;
}
