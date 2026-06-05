// Week 2 - Experiment 1
// Structure with 5 members - Student marks

#include<iostream>
#include<string>
using namespace std;

struct Student {
    char name[50];
    int rollNumber;
    float marks1, marks2, marks3;
};

int main() {
    Student s;
    cout << "Enter Name: "; cin >> s.name;
    cout << "Enter Roll Number: "; cin >> s.rollNumber;
    cout << "Enter Marks of Subject 1: "; cin >> s.marks1;
    cout << "Enter Marks of Subject 2: "; cin >> s.marks2;
    cout << "Enter Marks of Subject 3: "; cin >> s.marks3;

    float total = s.marks1 + s.marks2 + s.marks3;
    cout << "\nName: " << s.name << ", Roll No: " << s.rollNumber << endl;
    cout << "Total Marks: " << total << endl;

    return 0;
}
