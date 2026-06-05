// Week 13 - Experiment 2
// Rectangle - Exception Handling (All 4 Cases)

#include<iostream>
using namespace std;

// Exception Classes
class NegativeWidth {
public:
    double value;
    NegativeWidth(double v) { value = v; }
};
class NegativeLength {
public:
    double value;
    NegativeLength(double v) { value = v; }
};

class Rectangle {
private:
    double width, length;
public:
    Rectangle(double w=0, double l=0) { setWidth(w); setLength(l); }
    void setWidth(double w) { if(w < 0) throw NegativeWidth(w); width = w; }
    void setLength(double l) { if(l < 0) throw NegativeLength(l); length = l; }
    double getWidth() { return width; }
    double getLength() { return length; }
    double getArea() { return width * length; }
};

int main() {
    // Case 1 & 2: Basic exception
    try {
        Rectangle r(5, -3);
        cout << "Area: " << r.getArea() << endl;
    }
    catch(NegativeWidth e) { cout << "Error: Negative width = " << e.value << endl; }
    catch(NegativeLength e) { cout << "Error: Negative length = " << e.value << endl; }

    // Case 4: Recover from error
    double w, l;
    bool valid = false;
    while(!valid) {
        try {
            cout << "Enter width: "; cin >> w;
            cout << "Enter length: "; cin >> l;
            Rectangle r2(w, l);
            cout << "Area: " << r2.getArea() << endl;
            valid = true;
        }
        catch(NegativeWidth e) { cout << "Width cannot be negative! Try again." << endl; }
        catch(NegativeLength e) { cout << "Length cannot be negative! Try again." << endl; }
    }
    return 0;
}
