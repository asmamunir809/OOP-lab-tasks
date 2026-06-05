// Week 12 - Experiment 3
// Person (abstract), Employee, Teacher - Pure Virtual Function

#include<iostream>
#include<string>
using namespace std;

class Person {
protected:
    string name;
    int age;
    bool isMale;
public:
    Person() : name(""), age(0), isMale(true) {}
    Person(string n, int a, bool m) : name(n), age(a), isMale(m) {}
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    void setIsMale(bool m) { isMale = m; }
    string getName() { return name; }
    int getAge() { return age; }
    bool getIsMale() { return isMale; }
    virtual void showData() = 0;  // Pure virtual
};

class Employee : public Person {
protected:
    string employerName;
    double hourlyWage;
public:
    Employee() : Person(), employerName(""), hourlyWage(0) {}
    Employee(string n, int a, bool m, string emp, double wage)
        : Person(n,a,m), employerName(emp), hourlyWage(wage) {}
    void setEmployerName(string e) { employerName = e; }
    void setHourlyWage(double w) { hourlyWage = w; }
    void showData() {
        cout << "Employee | Name: " << name << " | Age: " << age
             << " | Employer: " << employerName << " | Wage: $" << hourlyWage << "/hr" << endl;
    }
};

class Teacher : public Person {
private:
    string address, contactNumber;
    int teachesGrade;
public:
    Teacher() : Person(), address(""), contactNumber(""), teachesGrade(0) {}
    Teacher(string n, int a, bool m, string addr, string contact, int grade)
        : Person(n,a,m), address(addr), contactNumber(contact), teachesGrade(grade) {}
    void showData() {
        cout << "Teacher | Name: " << name << " | Age: " << age
             << " | Grade: " << teachesGrade << " | Contact: " << contactNumber << endl;
    }
};

int main() {
    Person* people[4];
    people[0] = new Employee("Ali", 30, true, "Tech Corp", 25.5);
    people[1] = new Employee("Sara", 28, false, "Data Inc", 30.0);
    people[2] = new Teacher("Ms. Fatima", 35, false, "Islamabad", "0300-1234567", 10);
    people[3] = new Teacher("Mr. Hassan", 40, true, "Rawalpindi", "0301-9876543", 12);

    for(int i=0; i<4; i++) people[i]->showData();

    for(int i=0; i<4; i++) delete people[i];
    return 0;
}
