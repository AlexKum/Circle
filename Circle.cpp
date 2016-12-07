#include <math.h>
#include "Circle.h"

Circle::Circle(int X, int Y, int R) : X(X), Y(Y), R(R) {}
Circle::Circle() {}

int Circle::getX() const {
    return X;
}

void Circle::setX(int X) {
    Circle::X = X;
}

int Circle::getY() const {
    return Y;
}

void Circle::setY(int Y) {
    Circle::Y = Y;
}

int Circle::getR() const {
    return R;
}

void Circle::setR(int R) {
    Circle::R = R;
}

int Circle::getS() const {
    return S;
}

bool Circle::checkEqualityAreas(Circle circle) {
    if(S == circle.S) {
        return true;
    } else {
        return false;
    }
}

std::ostream &operator<<(std::ostream &os, const Circle &circle) {
    os << "X: " << circle.X << " Y: " << circle.Y << " R: " << circle.R << " S: " << circle.S;
    return os;
}

int Circle::findArea() {
    S = M_PI * pow(R, 2);
    return S;
}
