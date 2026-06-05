// Week 11 - Experiment 1
// Aggregation - RoomDimension & RoomCarpet

#include<iostream>
using namespace std;

class RoomDimension {
private:
    double length, width;
public:
    RoomDimension(double l=0, double w=0) { length=l; width=w; }
    void setLength(double l) { length = l; }
    void setWidth(double w) { width = w; }
    double getArea() { return length * width; }
};

class RoomCarpet {
private:
    RoomDimension room;  // Aggregation
    double costPerSqFt;
public:
    RoomCarpet(RoomDimension r, double cost) { room = r; costPerSqFt = cost; }
    double getTotalCost() { return room.getArea() * costPerSqFt; }
};

int main() {
    double len, wid, cost;
    cout << "Enter room length: "; cin >> len;
    cout << "Enter room width: "; cin >> wid;
    cout << "Enter carpet cost per sq ft: $"; cin >> cost;

    RoomDimension rd(len, wid);
    RoomCarpet rc(rd, cost);

    cout << "Total Carpet Cost: $" << rc.getTotalCost() << endl;
    return 0;
}
