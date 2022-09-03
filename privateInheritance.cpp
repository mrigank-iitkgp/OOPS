#include <iostream>
#include <string>
using namespace std;

class Vehicle {
    private:
        string make;
        string color;
        int year;
    protected:
        string modelName;
    public:
        Vehicle() {
            this->make = "";
            this->color = "";
            this->year = 0;
            this->modelName = "";
        }
        Vehicle(string mk , string clr , int yr , string mdl) {
            this->make = mk;
            this->color = clr;
            this->year = yr;
            this->modelName = mdl;
        }
        void printDetails() {
            cout << "Manufacturer : " << make << endl;
            cout << "Color : " << color << endl;
            cout << "Year of manufacture : " << year << endl;
        }
};

class Car : private Vehicle {
    private:
        string trunkSize;
    public:
        Car() {
            trunkSize = "";
        }
        Car(string mk , string clr , int yr , string mdl , string trunkSize) :
        Vehicle(mk , clr , yr , mdl) {
            this->trunkSize = trunkSize;
        }
        void carDetails() {
            printDetails();
            cout << "Model Name : " << modelName << endl;
            cout << "Trunk Size : " << trunkSize << endl;
        }
};

int main() {
    Car car("Chevrolet", "Black", 2010, "Camaro", "9.1 cubic feet");
    // car.Year = 2000;     // this will give error as Year is private
    // car.Model = "Accord";   // this will give error as Model is protected
  
    car.carDetails();
    // car.printDetails();   // public functions of base class are inaccessible in main
}