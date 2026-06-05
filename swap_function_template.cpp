// Week 14 - Experiment 2
// Template Function - swap

#include<iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    cout << "Before: x=" << x << " y=" << y << endl;
    swapValues(x, y);
    cout << "After: x=" << x << " y=" << y << endl;

    double a = 1.1, b = 2.2;
    swapValues(a, b);
    cout << "Doubles swapped: " << a << ", " << b << endl;

    char c1 = 'A', c2 = 'Z';
    swapValues(c1, c2);
    cout << "Chars swapped: " << c1 << ", " << c2 << endl;

    return 0;
}
