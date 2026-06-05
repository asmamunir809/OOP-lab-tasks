// Week 8 - Experiment 2
// Employee & ProductionWorker Inheritance

#include<iostream>
#include<string>
using namespace std;

class Employee {
protected:
    string name, hireDate;
    int empNumber;
public:
    Employee(string n="", int id=0, string date="") : name(n), empNumber(id), hireDate(date) {}
    void setName(string n) { name = n; }
    void setEmpNumber(int id) { empNumber = id; }
    void setHireDate(string d) { hireDate = d; }
    string getName() { return name; }
    int getEmpNumber() { return empNumber; }
    string getHireDate() { return hireDate; }
    void display() {
        cout << "Name: " << name << " | ID: " << empNumber << " | Hired: " << hireDate << endl;
    }
};

class ProductionWorker : public Employee {
private:
    int shift;
    double hourlyPay;
public:
    ProductionWorker(string n="", int id=0, string date="", int s=1, double pay=0.0)
        : Employee(n, id, date), shift(s), hourlyPay(pay) {}
    void setShift(int s) { shift = s; }
    void setHourlyPay(double p) { hourlyPay = p; }
    int getShift() { return shift; }
    double getHourlyPay() { return hourlyPay; }
    void display() {
        Employee::display();
        cout << "Shift: " << (shift==1?"Day":"Night") << " | Pay: $" << hourlyPay << "/hr" << endl;
    }
};

int main() {
    ProductionWorker pw("Ali Ahmed", 1001, "2023-01-15", 1, 25.50);
    pw.display();
    return 0;
}
