#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
    private:
        double radius;
        double pi;
    public:
        Circle();
        Circle(double r);
        double area();
        double perimeter();
};
#endif