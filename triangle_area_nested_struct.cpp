// Week 2 - Experiment 5
// Triangle Area using nested structures (Distance)

#include<iostream>
using namespace std;

struct Distance {
    int feet;
    float inches;
};

struct Triangle {
    Distance base;
    Distance height;
};

int main() {
    Triangle t;
    cout << "Enter base (feet inches): ";
    cin >> t.base.feet >> t.base.inches;
    cout << "Enter height (feet inches): ";
    cin >> t.height.feet >> t.height.inches;

    float baseInches = t.base.feet * 12 + t.base.inches;
    float heightInches = t.height.feet * 12 + t.height.inches;
    float area = 0.5 * baseInches * heightInches;

    cout << "Area of Triangle: " << area << " square inches" << endl;
    return 0;
}
