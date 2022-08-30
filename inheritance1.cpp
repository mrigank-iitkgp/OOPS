#include <iostream>
#include <string>

using namespace std;

class Vehicle {
    protected:
        string makeName;
        string color;
        int year;
        string modelName;
    public:
        Vehicle() {
            this->makeName = "";
            this->color = "";
            this->modelName = "";
            year = 0;
        }
        Vehicle(string makeName , string color , int year , string modelName) {
            this->makeName = makeName;
            this->color = color;
            this->modelName = modelName;
            this->year = year;
        }
        void printDetails() {
            cout << "Manufacturer Name : " << makeName << endl;
            cout << "Color : " << color << endl;
            cout << "Manufacturing Year : " << year << endl;
            cout << "Model Name : " << modelName << endl;
        }
};

class Cars : public Vehicle {
    private:
        string trunk_size;
    public:
        Cars() {
            this->trunk_size = "";
        }
        Cars(string makeName , string color , int year , string modelName , string ts)
        : Vehicle(makeName , color , year , modelName) {
                this->trunk_size = ts;
        }
        void carDetails() {
            printDetails();
            cout << "Trunk Size : " << trunk_size << endl;
        }
};

class Ships : public Vehicle {
    private:
        int numberOfAnchors;
    public:
        Ships() {
            this->numberOfAnchors = 0;
        }
        Ships(string makeName , string color , int year , string modelName , int na)
        : Vehicle(makeName , color , year , modelName) {
            this->numberOfAnchors = na;
        }
        void shipDetails() {
            printDetails();
            cout << "Number of Anchors : " << numberOfAnchors << endl;
        }
};

int main() {
    Cars car("Audi" , "Black" , 2022 , "R8" , "9 m3");
    cout << "Printing the car details !! " << endl;
    car.carDetails();
    Ships ship("Harland and Wolff", "Black and White", 1912,  "RMS Titanic", 3);
    cout << "Printing Ship Details !!" << endl;
    ship.shipDetails();
}