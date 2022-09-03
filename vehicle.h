#include <iostream>
#include <string>
using namespace std;

class Vehicle {
    protected:
        string make;
        string color;
        int year;
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
            cout << "Model : " << modelName << endl;
        }
};

class Car : public Vehicle {
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
            cout << "Trunk Size : " << trunkSize << endl;
        }
};

class Honda : public Car {
    private:
        int topSpeed;
    public:
        Honda() {
            this->topSpeed = 0;
        }
        Honda(string mk , string clr , int yr , string mdl , string trunkSize , int ts) :
        Car(mk , clr , yr , mdl , trunkSize) {
            this->topSpeed = ts;
        }
        void hondaDetails() {
            this->printDetails();
            this->carDetails();
            cout << "Top Speed of the car : " << this->topSpeed << endl;
        }
};