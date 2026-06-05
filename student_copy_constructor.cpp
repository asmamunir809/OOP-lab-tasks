// Week 6 - Experiment 1
// Student Class - Copy Constructor & Member-wise Assignment

#include<iostream>
#include<string>
using namespace std;

class Student {
private:
    int rollNumber;
    string firstName, lastName, studentClass;
    float totalMarks;
    char grade;
public:
    Student() { rollNumber = 0; firstName = ""; lastName = ""; studentClass = ""; totalMarks = 0; grade = 'F'; }
    Student(int r, string fn, string ln, string sc, float tm, char g) {
        rollNumber = r; firstName = fn; lastName = ln;
        studentClass = sc; totalMarks = tm; grade = g;
    }
    // Copy Constructor
    Student(const Student& s) {
        rollNumber = s.rollNumber; firstName = s.firstName; lastName = s.lastName;
        studentClass = s.studentClass; totalMarks = s.totalMarks; grade = s.grade;
        cout << "Copy Constructor Called!" << endl;
    }

    void DisplayClassData(Student* s) {
        cout << "Roll: " << s->rollNumber << " | Name: " << s->firstName << " " << s->lastName
             << " | Class: " << s->studentClass << " | Marks: " << s->totalMarks
             << " | Grade: " << s->grade << endl;
    }
};

int main() {
    Student s1(101, "Ali", "Ahmed", "BSIT-2A", 85.5, 'A');
    Student s2 = s1;  // Copy constructor
    Student s3(s1);   // Copy constructor

    s1.DisplayClassData(&s1);
    s2.DisplayClassData(&s2);
    s3.DisplayClassData(&s3);
    return 0;
}
