#include <iostream>

using namespace std;

class Car
{
    public:
    string make;
    string model;
    int year;
    string color;
    void start() {
        cout << "Engine starting..." << endl;
    }
    void stop() {
        cout << "Stopping engine..." << endl;
    }
    void accelerate() {
        cout << "Speeding up!" << endl;
    }
    void brake() {
        cout << "Slowing down..." << endl;
    }
};

int main()
{
    Car myCar;
    myCar.make = "Toyota";
    myCar.model = "Camry";
    myCar.year = 2022;
    myCar.color = "Blue";

    cout << "Car details: " << myCar.make << " " << myCar.model << " " << myCar.year << " " << myCar.color << endl;

    myCar.start();
    myCar.accelerate();
    myCar.brake();
    myCar.stop();
}