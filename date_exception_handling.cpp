// Week 13 - Experiment 1
// Exception Handling - Date Class

#include<iostream>
#include<string>
using namespace std;

class InvalidDay {};
class InvalidMonth {};

class Date {
private:
    int month, day, year;
    string months[13] = {"","January","February","March","April","May","June",
                         "July","August","September","October","November","December"};
public:
    Date(int m, int d, int y) {
        if(d < 1 || d > 31) throw InvalidDay();
        if(m < 1 || m > 12) throw InvalidMonth();
        month=m; day=d; year=y;
    }
    void print1() { cout << month << "/" << day << "/" << year << endl; }
    void print2() { cout << months[month] << " " << day << ", " << year << endl; }
    void print3() { cout << day << " " << months[month] << " " << year << endl; }
};

int main() {
    try {
        Date d(12, 25, 2014);
        d.print1(); d.print2(); d.print3();

        Date d2(13, 5, 2024);  // Invalid month
    }
    catch(InvalidDay) { cout << "Error: Invalid Day!" << endl; }
    catch(InvalidMonth) { cout << "Error: Invalid Month!" << endl; }
    return 0;
}
