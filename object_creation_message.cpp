// Week 3 - Experiment 5
// Class that displays message when object is created

#include<iostream>
using namespace std;

class MessageClass {
public:
    MessageClass() {
        cout << "An object has been created!" << endl;
    }
};

int main() {
    cout << "Creating object 1..." << endl;
    MessageClass obj1;
    cout << "Creating object 2..." << endl;
    MessageClass obj2;
    cout << "Creating object 3..." << endl;
    MessageClass obj3;
    return 0;
}
