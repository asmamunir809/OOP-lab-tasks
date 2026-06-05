// Week 5 - Experiment 2
// Travel Class - Objects as Function Parameters

#include<iostream>
using namespace std;

class Travel {
public:
    int km, hr;
    Travel() { km = 0; hr = 0; }
    void input() {
        cout << "Enter km: "; cin >> km;
        cout << "Enter hours: "; cin >> hr;
    }
    void show() { cout << "km: " << km << ", hr: " << hr << endl; }
    void add(Travel p) {
        cout << "Total km: " << km + p.km << ", Total hr: " << hr + p.hr << endl;
    }
};

int main() {
    Travel t1, t2;
    cout << "Travel 1:" << endl; t1.input();
    cout << "Travel 2:" << endl; t2.input();
    t1.add(t2);
    return 0;
}
