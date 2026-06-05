// Week 4 - Experiment 1
// Employee Class with Multiple Constructors

#include<iostream>
#include<string>
using namespace std;

class Employee {
private:
    string name, department, position;
    int idNumber;
public:
    Employee() { name = ""; department = ""; position = ""; idNumber = 0; }
    Employee(string n, int id) { name = n; idNumber = id; department = ""; position = ""; }
    Employee(string n, int id, string dept, string pos) { name = n; idNumber = id; department = dept; position = pos; }

    void setName(string n) { name = n; }
    void setID(int id) { idNumber = id; }
    void setDepartment(string d) { department = d; }
    void setPosition(string p) { position = p; }

    void display() {
        cout << "Name: " << name << " | ID: " << idNumber
             << " | Dept: " << department << " | Position: " << position << endl;
    }
};

int main() {
    Employee e1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee e2("Mark Jones", 39119, "IT", "Programmer");
    Employee e3("Joy Rogers", 81774, "Manufacturing", "Engineer");

    e1.display();
    e2.display();
    e3.display();
    return 0;
}
