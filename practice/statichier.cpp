#include "statichier.hpp"
#include <iostream>

void Circle::draw() const {
    std::cout << "draw a circle" << std::endl;
}

Coord Circle::center_of_gravity() const {
    return Coord(0,0);
}

void Line::draw() const {
    std::cout << "draw a line" << std::endl;
}

Coord Line::center_of_gravity() const {
    return Coord(0,0);
}
