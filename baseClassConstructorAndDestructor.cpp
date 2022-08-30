#include <iostream>
using namespace std;

class BaseClass {
    protected:
        int value;
    public:
        BaseClass() {
            this->value = 0;
            cout << "Calling the default constructor of base class !!" << endl;
        }
        BaseClass(int value) {
            this->value = value;
            cout << "Calling the parameterized constructor of the base class !!" << endl;
        }
        ~BaseClass() {
            cout << "Calling the default destructor of the base class !!" << endl;
        }
};

class DerivedClass : public BaseClass {
    public:
        DerivedClass() {
            cout << "Calling the default constructor of the the derived class !!" << endl;
        }
        DerivedClass(int value) 
        : BaseClass(value) {
            cout << "Calling the parameterized constructor of the derived class !!" << endl;
        }
        ~DerivedClass() {
            cout << "Calling the default destructor of the derived class !!" << endl;
        }
};

int main() {
    {
        cout << "Example - 1 !!" << endl;
        DerivedClass dc1;
    }
    {
        cout << "Example - 2 !!" << endl;
        DerivedClass dc2(100);
    }
}