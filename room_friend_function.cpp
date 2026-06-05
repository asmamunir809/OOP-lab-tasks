// Week 5 - Experiment 5
// Friend Function

#include<iostream>
using namespace std;

class Room {
private:
    double width;
public:
    void setWidth(double w) { width = w; }
    friend void printWidth(Room r);
};

void printWidth(Room r) {
    cout << "Width of Room: " << r.width << endl;
}

int main() {
    Room room;
    room.setWidth(10.10);
    printWidth(room);
    return 0;
}
