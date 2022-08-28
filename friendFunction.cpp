#include <iostream>
#include <string>
using namespace std;

class Ball {
    public:
        Ball(double radius , string color) {
            this->radius = radius;
            this->color = color;
        }
        void printRadius() {
            cout << "The radius of ball is : " << this->radius << endl;
        }
        void printVolume() {
            cout << "The voulume of the ball is : " << (4.0 / 3.0) * 3.14 * this->radius * this->radius * this->radius << endl; 
        }
        void printColor() {
            cout << "The color of the ball is : " << this->color << endl;
        }
        friend void setRadius(Ball& b , double radius);
        friend void setColor(Ball& b , string color);
    private:
        double radius;
        string color;
};

void setRadius(Ball& b , double radius) {
    b.radius = radius;
}

void setColor(Ball& b , string color) {
    b.color = color;
}

int main() {
    Ball ball(20 , "red");
    ball.printRadius();
    ball.printColor();
    ball.printVolume();

    // Changing the radius of ball
    cout << "Changing the radius of the ball !!" << endl;
    setRadius(ball , 15);
    ball.printRadius();
    // Changing the color of the ball
    cout << "Changing the color of the ball !!" << endl;
    setColor(ball , "blue");
    ball.printColor();
}