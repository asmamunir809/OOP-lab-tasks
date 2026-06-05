// Week 2 - Experiment 3
// Employee Structure with Salary

#include<iostream>
using namespace std;

struct Employee {
    int empNumber;
    float salary;
};

void displayEmployee(Employee e) {
    cout << "Emp No: " << e.empNumber << " | Salary: $" << e.salary << endl;
}

int main() {
    Employee e[3];
    for(int i = 0; i < 3; i++) {
        cout << "Employee " << i+1 << " - Number: "; cin >> e[i].empNumber;
        cout << "Employee " << i+1 << " - Salary: "; cin >> e[i].salary;
    }
    cout << "\n--- Employee Records ---\n";
    for(int i = 0; i < 3; i++) displayEmployee(e[i]);
    return 0;
}
