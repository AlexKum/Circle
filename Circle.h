#ifndef CIRCLE_CIRCLE_H
#define CIRCLE_CIRCLE_H


#include <ostream>

class Circle {
private:
    int X;
    int Y;
    int R;
    int S;
public:
    Circle(int X, int Y, int R);
    Circle();

    int getX() const;
    void setX(int X);

    int getY() const;
    void setY(int Y);

    int getR() const;
    void setR(int R);

    int getS() const;

    int findArea();
    bool checkEqualityAreas(Circle circle);

    friend std::ostream &operator<<(std::ostream &os, const Circle &circle);
};


#endif //CIRCLE_CIRCLE_H
