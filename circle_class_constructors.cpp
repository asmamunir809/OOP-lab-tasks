// Week 4 - Experiment 2
// Circle Class

#include<iostream>
using namespace std;

class Circle {
private:
    double radius;
    double pi;
public:
    Circle() { radius = 0.0; pi = 3.14159; }
    Circle(double r) { radius = r; pi = 3.14159; }

    void setRadius(double r) { radius = r; }
    double getRadius() { return radius; }
    double getArea() { return pi * radius * radius; }
    double getDiameter() { return radius * 2; }
    double getCircumference() { return 2 * pi * radius; }
};

int main() {
    double r;
    cout << "Enter radius: "; cin >> r;
    Circle c(r);
    cout << "Area: " << c.getArea() << endl;
    cout << "Diameter: " << c.getDiameter() << endl;
    cout << "Circumference: " << c.getCircumference() << endl;
    return 0;
}
