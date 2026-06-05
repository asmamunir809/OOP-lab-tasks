// Week 8 - Experiment 4
// Shape, Triangle, Circle - Function Overriding

#include<iostream>
#include<string>
#define PI 3.14159
using namespace std;

class Shape {
protected:
    string color;
public:
    void setColor(string c) { color = c; }
    string getColor() { return color; }
    double area() { return -1; }
    void display() { cout << "Shape | Color: " << color << endl; }
};

class Triangle : public Shape {
private:
    double base, height, sides;
public:
    Triangle(double b=0, double h=0, double s=0, string c="red") {
        base=b; height=h; sides=s; color=c;
    }
    void setBase(double b) { base = b; }
    void setHeight(double h) { height = h; }
    double getBase() { return base; }
    double getHeight() { return height; }
    double area() { return 0.5 * base * height; }
    void display() {
        cout << "Triangle | Color: " << color << " | Base: " << base
             << " | Height: " << height << " | Area: " << area() << endl;
    }
};

class Circle : public Shape {
private:
    double centerX, centerY, radius;
public:
    Circle(double x=0, double y=0, double r=0, string c="blue") {
        centerX=x; centerY=y; radius=r; color=c;
    }
    void setRadius(double r) { radius = r; }
    double getRadius() { return radius; }
    double area() { return PI * radius * radius; }
    double circumference() { return 2 * PI * radius; }
    double diameter() { return 2 * radius; }
    void display() {
        cout << "Circle | Color: " << color << " | Radius: " << radius
             << " | Area: " << area() << endl;
    }
};

int main() {
    Triangle t(5, 10, 3, "green");
    Circle c(0, 0, 7, "blue");
    t.display();
    c.display();
    return 0;
}
