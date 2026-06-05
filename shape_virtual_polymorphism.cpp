// Week 12 - Experiment 1
// Polymorphism - Shape, Triangle, Circle with Virtual Functions

#include<iostream>
#include<string>
#define PI 3.14159
using namespace std;

class Shape {
protected:
    string color;
public:
    Shape(string c="white") : color(c) {}
    void setColor(string c) { color = c; }
    string getColor() { return color; }
    virtual double area() = 0;
    virtual void draw() { cout << "Shape | Color: " << color << endl; }
};

class Triangle : public Shape {
private:
    double base, height;
public:
    Triangle() : Shape(), base(0), height(0) {}
    Triangle(double b, double h, string c) : Shape(c), base(b), height(h) {}
    void setBase(double b) { base = b; }
    void setHeight(double h) { height = h; }
    double getBase() { return base; }
    double getHeight() { return height; }
    double area() { return 0.5 * base * height; }
    void draw() {
        cout << "Triangle | Color: " << color << " | Base: " << base
             << " | Height: " << height << " | Area: " << area() << endl;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle() : Shape(), radius(0) {}
    Circle(double r, string c) : Shape(c), radius(r) {}
    void setRadius(double r) { radius = r; }
    double getRadius() { return radius; }
    double area() { return PI * radius * radius; }
    double circumference() { return 2 * PI * radius; }
    double diameter() { return 2 * radius; }
    void draw() {
        cout << "Circle | Color: " << color << " | Radius: " << radius
             << " | Area: " << area() << " | Circumference: " << circumference() << endl;
    }
};

int main() {
    Shape* shapes[4];
    shapes[0] = new Triangle(5, 10, "red");
    shapes[1] = new Circle(7, "blue");
    shapes[2] = new Triangle(3, 8, "green");
    shapes[3] = new Circle(4, "yellow");

    for(int j = 0; j < 4; j++) shapes[j]->draw();

    for(int j = 0; j < 4; j++) delete shapes[j];
    return 0;
}
