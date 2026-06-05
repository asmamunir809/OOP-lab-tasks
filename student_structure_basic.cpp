// Week 1 - Experiment 1
// Student Structure - Initialize and Display

#include<iostream>
#include<string>
using namespace std;

struct Student {
    int studentID;
    char studentName[50];
    char coursecode[10];
    char courseName[50];
    int courseMarks;
};

int main() {
    Student s;
    s.studentID = 20;
    strcpy(s.studentName, "Ahmad");
    strcpy(s.coursecode, "02");
    strcpy(s.courseName, "Programming");
    s.courseMarks = 7;

    cout << "Student ID: " << s.studentID << endl;
    cout << "Student Name: " << s.studentName << endl;
    cout << "Course Code: " << s.coursecode << endl;
    cout << "Course Name: " << s.courseName << endl;
    cout << "Course Marks: " << s.courseMarks << endl;

    return 0;
}
