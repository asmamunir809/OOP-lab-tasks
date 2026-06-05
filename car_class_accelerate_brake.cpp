// Week 3 - Experiment 4
// Car Class with Accelerate and Brake

#include<iostream>
#include<string>
using namespace std;

class Car {
private:
    int yearModel;
    string company;
    int speed;
public:
    void setYearModel(int y) { yearModel = y; }
    void setCompany(string c) { company = c; }
    void setSpeed(int s) { speed = s; }

    int getYearModel() { return yearModel; }
    string getCompany() { return company; }
    int getSpeed() { return speed; }

    void accelerate() { speed += 5; }
    void brake() { speed -= 5; }
};

int main() {
    Car car;
    car.setYearModel(2022);
    car.setCompany("Toyota");
    car.setSpeed(0);

    cout << "--- Accelerating ---" << endl;
    for(int i = 0; i < 5; i++) {
        car.accelerate();
        cout << "Speed: " << car.getSpeed() << " km/h" << endl;
    }

    cout << "--- Braking ---" << endl;
    for(int i = 0; i < 5; i++) {
        car.brake();
        cout << "Speed: " << car.getSpeed() << " km/h" << endl;
    }
    return 0;
}
