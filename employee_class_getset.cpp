// Week 3 - Experiment 3
// Employee Class with getters/setters

#include<iostream>
#include<string>
using namespace std;

class Employee {
private:
    string name;
    int idNumber;
    string department;
    string position;
public:
    void setName(string n) { name = n; }
    void setID(int id) { idNumber = id; }
    void setDepartment(string d) { department = d; }
    void setPosition(string p) { position = p; }

    string getName() { return name; }
    int getID() { return idNumber; }
    string getDepartment() { return department; }
    string getPosition() { return position; }

    void display() {
        cout << "Name: " << name << ", ID: " << idNumber
             << ", Dept: " << department << ", Position: " << position << endl;
    }
};

int main() {
    Employee e1, e2, e3;

    e1.setName("Susan Meyers"); e1.setID(47899); e1.setDepartment("Accounting"); e1.setPosition("Vice President");
    e2.setName("Mark Jones");   e2.setID(39119); e2.setDepartment("IT");         e2.setPosition("Programmer");
    e3.setName("Joy Rogers");   e3.setID(81774); e3.setDepartment("Manufacturing"); e3.setPosition("Engineer");

    e1.display();
    e2.display();
    e3.display();
    return 0;
}
