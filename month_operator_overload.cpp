// Week 7 - Experiment 2
// Month Class - Operator Overloading (++ and --)

#include<iostream>
#include<string>
using namespace std;

class Month {
private:
    string name;
    int monthNumber;
    string months[13] = {"","January","February","March","April","May","June",
                         "July","August","September","October","November","December"};
public:
    Month() { monthNumber = 1; name = "January"; }
    Month(string n) {
        name = n;
        for(int i = 1; i <= 12; i++) if(months[i] == n) { monthNumber = i; break; }
    }
    Month(int num) {
        if(num >= 1 && num <= 12) { monthNumber = num; name = months[num]; }
    }

    void setMonth(string n) { name = n; for(int i=1;i<=12;i++) if(months[i]==n) monthNumber=i; }
    void setMonthNumber(int n) { if(n>=1&&n<=12){ monthNumber=n; name=months[n]; } }
    string getName() { return name; }
    int getMonthNumber() { return monthNumber; }

    // Prefix ++
    Month& operator++() {
        monthNumber = (monthNumber % 12) + 1;
        name = months[monthNumber];
        return *this;
    }
    // Postfix ++
    Month operator++(int) {
        Month temp = *this;
        ++(*this);
        return temp;
    }
    // Prefix --
    Month& operator--() {
        monthNumber = (monthNumber == 1) ? 12 : monthNumber - 1;
        name = months[monthNumber];
        return *this;
    }
    // Postfix --
    Month operator--(int) {
        Month temp = *this;
        --(*this);
        return temp;
    }

    friend ostream& operator<<(ostream& out, const Month& m) {
        out << m.name << " (" << m.monthNumber << ")";
        return out;
    }
    friend istream& operator>>(istream& in, Month& m) {
        cout << "Enter month number (1-12): "; in >> m.monthNumber;
        m.name = m.months[m.monthNumber];
        return in;
    }
};

int main() {
    Month m(6);
    cout << "Current: " << m << endl;
    ++m; cout << "After ++: " << m << endl;
    --m; cout << "After --: " << m << endl;
    return 0;
}
