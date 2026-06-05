// Week 3 - Experiment 1
// Date Class with multiple display formats

#include<iostream>
#include<string>
using namespace std;

class Date {
private:
    int month, day, year;
public:
    void setDate(int m, int d, int y) {
        if(d < 1 || d > 31) { cout << "Invalid day!" << endl; return; }
        if(m < 1 || m > 12) { cout << "Invalid month!" << endl; return; }
        month = m; day = d; year = y;
    }

    void printFormat1() { cout << month << "/" << day << "/" << year << endl; }

    void printFormat2() {
        string months[] = {"","January","February","March","April","May","June",
                           "July","August","September","October","November","December"};
        cout << months[month] << " " << day << ", " << year << endl;
    }

    void printFormat3() {
        string months[] = {"","January","February","March","April","May","June",
                           "July","August","September","October","November","December"};
        cout << day << " " << months[month] << " " << year << endl;
    }
};

int main() {
    Date d;
    d.setDate(12, 25, 2014);
    d.printFormat1();
    d.printFormat2();
    d.printFormat3();
    return 0;
}
