// Week 9 - Experiment 1
// Multilevel Inheritance - Phone Classes

#include<iostream>
#include<string>
using namespace std;

class LocalPhone {
protected:
    string phone;
public:
    void inputPhone() { cout << "Local Number: "; cin >> phone; }
    void showPhone() { cout << "Phone: " << phone; }
};

class NatPhone : public LocalPhone {
protected:
    string cityCode;
public:
    void inputNat() { inputPhone(); cout << "City Code: "; cin >> cityCode; }
    void showNat() { cout << "(" << cityCode << ") "; showPhone(); }
};

class IntPhone : public NatPhone {
private:
    string countryCode;
public:
    void inputInt() { inputNat(); cout << "Country Code: "; cin >> countryCode; }
    void showInt() { cout << "+" << countryCode << " "; showNat(); cout << endl; }
};

int main() {
    IntPhone ip;
    ip.inputInt();
    cout << "\nFull Number: "; ip.showInt();
    return 0;
}
