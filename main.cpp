#include <iostream>
#include "Circle.h"

int main() {

    Circle circle(0, 0, 12);
    Circle circle1(3, 5, 11);

    circle.findArea();
    std::cout << circle << std::endl;

    circle1.findArea();
    std::cout << circle1 << std::endl;

    if(circle.checkEqualityAreas(circle1)) {
        std::cout << "Square are equal" << std::endl;
    } else {
        std::cout << "Square are not equal" << std::endl;
    }


    return 0;
}