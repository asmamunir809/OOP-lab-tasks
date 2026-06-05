// Week 14 - Experiment 1
// Function Templates - minimum and maximum

#include<iostream>
using namespace std;

template <typename T>
T minimum(T a, T b) { return (a < b) ? a : b; }

template <typename T>
T maximum(T a, T b) { return (a > b) ? a : b; }

int main() {
    cout << "Min(3, 7) = " << minimum(3, 7) << endl;
    cout << "Max(3, 7) = " << maximum(3, 7) << endl;
    cout << "Min(3.5, 2.1) = " << minimum(3.5, 2.1) << endl;
    cout << "Max('a', 'z') = " << maximum('a', 'z') << endl;
    return 0;
}
