// Week 7 - Experiment 1
// Operator Overloading - Complex Number

#include<iostream>
using namespace std;

class Complex {
private:
    double real, imag;
public:
    Complex(double r = 0, double i = 0) { real = r; imag = i; }

    Complex operator+(const Complex& c) { return Complex(real + c.real, imag + c.imag); }
    Complex operator-(const Complex& c) { return Complex(real - c.real, imag - c.imag); }
    Complex operator*(const Complex& c) {
        return Complex(real*c.real - imag*c.imag, real*c.imag + imag*c.real);
    }
    Complex& operator=(const Complex& c) { real = c.real; imag = c.imag; return *this; }

    friend ostream& operator<<(ostream& out, const Complex& c) {
        out << c.real << " + " << c.imag << "j";
        return out;
    }
    friend istream& operator>>(istream& in, Complex& c) {
        cout << "Real: "; in >> c.real;
        cout << "Imaginary: "; in >> c.imag;
        return in;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);
    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "c1 + c2 = " << c1 + c2 << endl;
    cout << "c1 - c2 = " << c1 - c2 << endl;
    cout << "c1 * c2 = " << c1 * c2 << endl;
    return 0;
}
