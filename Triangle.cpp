#include "Triangle.h"

float Triangle::area() const {
    return (pow(edgeLength, 2) * sqrt(3)) / 4;
}

