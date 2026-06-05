// Week 10 - Experiment 2
// Box Class - Volume, Compare, This Pointer

#include<iostream>
using namespace std;

class Box {
private:
    float length, breadth, height;
    static int count;
public:
    Box() { length=breadth=height=0; count++; }
    Box(float l, float b, float h) { length=l; breadth=b; height=h; count++; }
    ~Box() {}

    void setData() {
        cout << "Length: "; cin >> length;
        cout << "Breadth: "; cin >> breadth;
        cout << "Height: "; cin >> height;
    }
    float CalculateVolume() { return length * breadth * height; }
    bool compare(Box a) { return this->CalculateVolume() > a.CalculateVolume(); }
    static int getCount() { return count; }
};
int Box::count = 0;

int main() {
    Box b1(3, 4, 5), b2(2, 6, 7);
    Box *ptr1 = &b1, *ptr2 = &b2;

    cout << "Box1 Volume: " << ptr1->CalculateVolume() << endl;
    cout << "Box2 Volume: " << ptr2->CalculateVolume() << endl;

    if(b1.compare(b2)) cout << "Box 1 is greater!" << endl;
    else cout << "Box 2 is greater!" << endl;

    cout << "Total Boxes: " << Box::getCount() << endl;
    return 0;
}
