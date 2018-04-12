#ifndef SQUARE_H_INCLUDED
#define SQUARE_H_INCLUDED

class Square : public Polygon {

    public:
        Square(const float& edgeLength): Polygon(4, edgeLength) {}

        //Override
        float area() const {
            return edgeLength * edgeLength;
        }


};

#endif // SQUARE_H_INCLUDED
