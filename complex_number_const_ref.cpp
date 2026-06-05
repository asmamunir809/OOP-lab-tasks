// Week 5 - Experiment 4
// ComplexNumber Class

#include<iostream>
using namespace std;

class ComplexNumber {
public:
    double realPart, imaginaryPart;
    ComplexNumber() { realPart = 0; imaginaryPart = 0; }
    ComplexNumber(double r, double i) { realPart = r; imaginaryPart = i; }
    ~ComplexNumber() {}

    ComplexNumber add(const ComplexNumber& c) {
        return ComplexNumber(realPart + c.realPart, imaginaryPart + c.imaginaryPart);
    }
    ComplexNumber sub(const ComplexNumber& c) {
        return ComplexNumber(realPart - c.realPart, imaginaryPart - c.imaginaryPart);
    }
    ComplexNumber mul(const ComplexNumber& c) {
        return ComplexNumber(realPart*c.realPart - imaginaryPart*c.imaginaryPart,
                             realPart*c.imaginaryPart + imaginaryPart*c.realPart);
    }
    void print() const {
        cout << realPart << " + " << imaginaryPart << "j" << endl;
    }
};

int main() {
    ComplexNumber c1(3, 4), c2(1, 2);
    cout << "c1 + c2 = "; c1.add(c2).print();
    cout << "c1 - c2 = "; c1.sub(c2).print();
    cout << "c1 * c2 = "; c1.mul(c2).print();
    return 0;
}
