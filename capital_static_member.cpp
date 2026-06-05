// Week 5 - Experiment 3
// Static Data Member - Object Counter

#include<iostream>
using namespace std;

class Capital {
public:
    static int count;
    Capital() { count++; }
    void show() { cout << "Objects created: " << count << endl; }
};

int Capital::count = 0;

int main() {
    Capital x, y, z;
    x.show();
    return 0;
}
