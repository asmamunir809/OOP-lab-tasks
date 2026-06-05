// Week 1 - Experiment 4
// Three Student Instances - Find Total Marks

#include<iostream>
#include<string>
using namespace std;

struct Student {
    int studentID;
    char studentName[50];
    char courseID[10];
    int courseMarks;
};

int main() {
    Student st1, st2, st3, st4;

    st1.studentID = 20; strcpy(st1.studentName, "Ahmad");  strcpy(st1.courseID, "CS-201"); st1.courseMarks = 17;
    st2.studentID = 21; strcpy(st2.studentName, "Hassan"); strcpy(st2.courseID, "CS-201"); st2.courseMarks = 18;
    st3.studentID = 22; strcpy(st3.studentName, "Jamil");  strcpy(st3.courseID, "CS-201"); st3.courseMarks = 19;
    st4.studentID = 23; strcpy(st4.studentName, "Umair");  strcpy(st4.courseID, "CS-201"); st4.courseMarks = 13;

    int totalMarks = st1.courseMarks + st2.courseMarks + st3.courseMarks + st4.courseMarks;

    cout << "Total Marks of all Students: " << totalMarks << endl;

    return 0;
}
