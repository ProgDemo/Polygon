#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED

#include "Polygong.h"
#include <math.h>

class Triangle : public Polygon {

    private:
    public:
        Triangle(const float& edgeLength): Polygon(3, edgeLength) {}

        //Override
        float area() const;

        //Override
        std::string toString() const {
            return "This is a triangle!";
        }
};


#endif // TRIANGLE_H_INCLUDED
