// Week 8 - Experiment 3
// ShiftSupervisor derived from Employee

#include<iostream>
#include<string>
using namespace std;

class Employee {
protected:
    string name, hireDate;
    int empNumber;
public:
    Employee(string n="", int id=0, string date="") : name(n), empNumber(id), hireDate(date) {}
    void display() {
        cout << "Name: " << name << " | ID: " << empNumber << " | Hired: " << hireDate << endl;
    }
};

class ShiftSupervisor : public Employee {
private:
    double annualSalary, annualBonus;
public:
    ShiftSupervisor(string n="", int id=0, string date="", double sal=0, double bonus=0)
        : Employee(n, id, date), annualSalary(sal), annualBonus(bonus) {}
    void setSalary(double s) { annualSalary = s; }
    void setBonus(double b) { annualBonus = b; }
    double getSalary() { return annualSalary; }
    double getBonus() { return annualBonus; }
    void display() {
        Employee::display();
        cout << "Salary: $" << annualSalary << " | Bonus: $" << annualBonus << endl;
    }
};

int main() {
    ShiftSupervisor ss("Hassan Khan", 2001, "2020-05-10", 75000, 5000);
    ss.display();
    return 0;
}
