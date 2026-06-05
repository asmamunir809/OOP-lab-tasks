// Week 10 - Experiment 1
// Pointer to Object - Paper Class

#include<iostream>
using namespace std;

class Paper {
private:
    double height, width;
    static int count;
public:
    Paper() { count++; }
    ~Paper() { cout << "Paper object destroyed." << endl; }
    void GetDimension() {
        cout << "Enter height: "; cin >> height;
        cout << "Enter width: "; cin >> width;
    }
    double Area() { return height * width; }
    double Perimeter() { return (2*height) + (2*width); }
    void properties() {
        cout << "Height: " << height << " | Width: " << width
             << " | Area: " << Area() << " | Perimeter: " << Perimeter() << endl;
    }
    static int getCount() { return count; }
};
int Paper::count = 0;

int main() {
    Paper p1, p2;
    Paper *ptrPaper = &p1;

    ptrPaper->GetDimension();
    ptrPaper->properties();

    cout << "Total Paper objects: " << Paper::getCount() << endl;
    return 0;
}
