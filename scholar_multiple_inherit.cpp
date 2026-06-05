// Week 9 - Experiment 2
// Multiple Inheritance - Teacher, Writer, Scholar

#include<iostream>
#include<string>
using namespace std;

class Teacher {
protected:
    string teacherName, age, address;
public:
    void inputTeacher() {
        cout << "Teacher Name: "; cin >> teacherName;
        cout << "Age: "; cin >> age;
        cout << "Address: "; cin >> address;
    }
    void displayTeacher() {
        cout << "Teacher: " << teacherName << " | Age: " << age << " | Address: " << address << endl;
    }
};

class Writer {
protected:
    string writerName, writerAddress;
    int booksWritten;
public:
    void inputWriter() {
        cout << "Writer Name: "; cin >> writerName;
        cout << "Address: "; cin >> writerAddress;
        cout << "Books Written: "; cin >> booksWritten;
    }
    void displayWriter() {
        cout << "Writer: " << writerName << " | Books: " << booksWritten << endl;
    }
};

class Scholar : public Teacher, public Writer {
public:
    void inputScholar() { inputTeacher(); inputWriter(); }
    void displayScholar() { displayTeacher(); displayWriter(); }
};

int main() {
    Scholar s;
    s.inputScholar();
    cout << "\n--- Scholar Data ---\n";
    s.displayScholar();
    return 0;
}
