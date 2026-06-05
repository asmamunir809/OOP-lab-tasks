// Week 2 - Experiment 2
// Date Structure

#include<iostream>
using namespace std;

struct Date {
    int month, day, year;
};

int main() {
    Date d;
    char slash;
    cout << "Enter date (MM/DD/YYYY): ";
    cin >> d.month >> slash >> d.day >> slash >> d.year;
    cout << "Date entered: " << d.month << "/" << d.day << "/" << d.year << endl;
    return 0;
}
