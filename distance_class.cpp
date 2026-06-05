// Week 3 - Experiment 2
// Distance Class

#include<iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;
public:
    void setFeet(int f) { feet = f; }
    void setInches(float i) { inches = i; }
    void showDistance() {
        cout << "Distance: " << feet << " feet " << inches << " inches" << endl;
    }
};

int main() {
    Distance d;
    d.setFeet(5);
    d.setInches(9.5);
    d.showDistance();
    return 0;
}
