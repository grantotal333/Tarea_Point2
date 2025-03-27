#include "point2d.h"

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    Point2d p1(1, 2);
    p1.print();
    
    Point2d p2(5, 5);
    p2.print();

    Point2d p3;
    p3.print();

    p3.setY(p2.getX());
    p3.setX(p1.getY());
    p3.print();

    cout << "El valor es: " << p1.distanceTo(p2) << endl;
    
    (p1.midpointTo(p2)).print();

    (p3.Vectunit()).print();

    Point2d p4(5, 5);
    p4.print();
    Point2d p5(9, 7);
    p5.print();
    Point2d p6;
    p6.print();

    for (int i = 0; i < 4; i++)
    {
        switch (i)
        {
        case 0:
            (p6.operator+(p4)).print();
            break;
        
        case 1:
            (p6.operator-(p4)).print();
            break;

        case 2:
            (p5.operator*(5)).print();
            break;

        case 3:
            (p5.operator/(5)).print();
            break;
        }
    }
    return 0;
}