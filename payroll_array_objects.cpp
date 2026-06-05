// Week 5 - Experiment 1
// Payroll Class - Array of Objects

#include<iostream>
using namespace std;

class Payroll {
private:
    double hourlyRate;
    double hoursWorked;
    double totalPay;
public:
    Payroll(double rate = 15.0) { hourlyRate = rate; hoursWorked = 0; totalPay = 0; }
    void setHours(double h) {
        if(h > 60) { cout << "Cannot exceed 60 hours!" << endl; hoursWorked = 60; }
        else hoursWorked = h;
        totalPay = hourlyRate * hoursWorked;
    }
    void display(int empNum) {
        cout << "Employee " << empNum << " | Hours: " << hoursWorked << " | Gross Pay: $" << totalPay << endl;
    }
};

int main() {
    Payroll employees[7];
    for(int i = 0; i < 7; i++) {
        double h;
        cout << "Enter hours for employee " << i+1 << ": "; cin >> h;
        employees[i].setHours(h);
    }
    cout << "\n--- Payroll Summary ---" << endl;
    for(int i = 0; i < 7; i++) employees[i].display(i+1);
    return 0;
}
