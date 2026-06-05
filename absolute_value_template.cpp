// Week 14 - Experiment 3
// Template Function - Absolute Value

#include<iostream>
using namespace std;

template <typename T>
T absoluteValue(T num) {
    return (num < 0) ? -num : num;
}

int main() {
    cout << "Absolute of -5 = " << absoluteValue(-5) << endl;
    cout << "Absolute of 2 = " << absoluteValue(2) << endl;
    cout << "Absolute of -3.7 = " << absoluteValue(-3.7) << endl;
    cout << "Absolute of 8.2 = " << absoluteValue(8.2) << endl;
    return 0;
}
