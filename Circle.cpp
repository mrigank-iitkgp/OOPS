#include "Circle.h"

Circle::Circle() {
    this->radius = 0;
    this->pi = 3.142;
}

Circle::Circle(double r) {
    this->radius = r;
    this->pi = 3.142;
}

double Circle::area() {
    return pi * radius * radius;
}

double Circle::perimeter() {
    return 2.0 * pi * radius;
}