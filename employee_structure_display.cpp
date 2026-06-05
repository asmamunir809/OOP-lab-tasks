// Week 1 - Experiment 3
// Employee Structure with Display Function

#include<iostream>
using namespace std;

struct Employee {
    int empNumber;
    float compensation;
};

void displayEmployee(Employee e) {
    cout << "Employee Number: " << e.empNumber << endl;
    cout << "Compensation: $" << e.compensation << endl;
    cout << "-------------------------" << endl;
}

int main() {
    Employee e1, e2, e3;

    cout << "Enter data for Employee 1:" << endl;
    cout << "Employee Number: "; cin >> e1.empNumber;
    cout << "Compensation: "; cin >> e1.compensation;

    cout << "\nEnter data for Employee 2:" << endl;
    cout << "Employee Number: "; cin >> e2.empNumber;
    cout << "Compensation: "; cin >> e2.compensation;

    cout << "\nEnter data for Employee 3:" << endl;
    cout << "Employee Number: "; cin >> e3.empNumber;
    cout << "Compensation: "; cin >> e3.compensation;

    cout << "\n--- Employee Records ---" << endl;
    displayEmployee(e1);
    displayEmployee(e2);
    displayEmployee(e3);

    return 0;
}
