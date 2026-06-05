// Week 12 - Experiment 2
// Ship, CruiseShip, CargoShip - Virtual Functions

#include<iostream>
#include<string>
using namespace std;

class Ship {
protected:
    string name, yearBuilt;
public:
    Ship(string n="", string y="") : name(n), yearBuilt(y) {}
    void setName(string n) { name = n; }
    void setYearBuilt(string y) { yearBuilt = y; }
    string getName() { return name; }
    string getYearBuilt() { return yearBuilt; }
    virtual void print() {
        cout << "Ship: " << name << " | Year: " << yearBuilt << endl;
    }
};

class CruiseShip : public Ship {
private:
    int maxPassengers;
public:
    CruiseShip(string n="", string y="", int p=0) : Ship(n,y), maxPassengers(p) {}
    void setMaxPassengers(int p) { maxPassengers = p; }
    int getMaxPassengers() { return maxPassengers; }
    void print() {
        cout << "Cruise Ship: " << name << " | Max Passengers: " << maxPassengers << endl;
    }
};

class CargoShip : public Ship {
private:
    int cargoCapacity;
public:
    CargoShip(string n="", string y="", int c=0) : Ship(n,y), cargoCapacity(c) {}
    void setCargoCapacity(int c) { cargoCapacity = c; }
    int getCargoCapacity() { return cargoCapacity; }
    void print() {
        cout << "Cargo Ship: " << name << " | Cargo Capacity: " << cargoCapacity << " tons" << endl;
    }
};

int main() {
    Ship* ships[3];
    ships[0] = new Ship("Titanic", "1912");
    ships[1] = new CruiseShip("Symphony", "2018", 6680);
    ships[2] = new CargoShip("Ever Given", "2018", 200000);

    for(int i=0; i<3; i++) ships[i]->print();

    for(int i=0; i<3; i++) delete ships[i];
    return 0;
}
