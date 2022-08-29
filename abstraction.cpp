#include <iostream>
#include "./Circle.h"

using namespace std;

int main() {
    Circle circle(5.0);
    cout << "The area of circle is : " << circle.area() << endl;
    cout << "The perimeter of circle is : " << circle.perimeter() << endl;
}