#ifndef POLYGONG_H_INCLUDED
#define POLYGONG_H_INCLUDED

#include <sstream>
#include <ostream>

class Polygon {

    private:
        int vertex;

    protected:
        float edgeLength;

    public:
        Polygon(const int& vertex, const float& edgeLength):
            vertex(vertex), edgeLength(edgeLength) {}

        void setEdgeLength(const float& edgeLength) { this->edgeLength = edgeLength; }
        float getEdgeLength() { return edgeLength; }

        virtual std::string toString() const {
            std::stringstream tmp;
            tmp << "Vertex: " << vertex << ", edge length: " << edgeLength << " cm.";
            return tmp.str();
        }
        virtual float area() const = 0;

        //!!! Csak referencia szerint lehet p-t átadni
        friend std::ostream& operator<<(std::ostream& out,const Polygon& p) {
            out << p.toString();
            return out;
        }
};


#endif // POLYGONG_H_INCLUDED
