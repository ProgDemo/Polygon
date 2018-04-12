#include <iostream>
#include <vector>
#include "Polygong.h"
#include "Triangle.h"
#include "Square.h"

using namespace std;

void poli(const Polygon& p) {
    cout << p << endl;
}

int main()
{
    //Polygon p(3, 4);

    Triangle t(5);
    Polygon* p = new Triangle(4.5);

    //cout << t.edgeLength;

    cout << t << endl;
    cout << t.toString() << endl;
    cout << p << endl;
    cout << *p << endl;
    cout << p->toString() << endl;
    cout << p->Polygon::toString() << endl;

    poli(t);
    poli(*p);

    return 0;
}
