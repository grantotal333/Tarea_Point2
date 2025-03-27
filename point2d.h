#ifndef POINT2D_H
#define POINT2D_H

#include <iostream>
#include <cmath>

using namespace std;

class Point2d {
private:
    double x, y;

public:
    // Constructores
    Point2d() : x(0), y(0) {}
    Point2d(double xVal, double yVal) : x(xVal), y(yVal) {}

    // Getter and Setter
    // Getters
    double getX() const { return x; }
    double getY() const { return y; }

    // Setters
    void setX(double xVal) { x = xVal; }
    void setY(double yVal) { y = yVal; }

    // Calcular la distancia
    double distanceTo(const Point2d &p) const
    {
        if (p.x == 0 && p.y == 0)
            return sqrt(pow(x, 2) + pow(y, 2));
        else
            return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
    }

    // Calcular el punto medio
    Point2d midpointTo(const Point2d &p) const
    {
        if (p.x == 0 && p.y == 0)
            return Point2d((x) / 2, (y) / 2);
        else
            return Point2d((x + p.x) / 2, (y + p.y) / 2);
    }

    // Calcular el vector unitario
    Point2d Vectunit() const
    {
        double norm = sqrt(pow(x, 2) + pow(y, 2));
        if (norm == 0)
            return Point2d(0, 0);
        else
            return Point2d(x / norm, y / norm);
    }

    // Sobrecarga de operadores
    Point2d operator+(const Point2d &p) const
    {
        return Point2d(x + p.x, y + p.y);
    }

    Point2d operator-(const Point2d &p) const
    {
        return Point2d(x - p.x, y - p.y);
    }

    Point2d operator*(double k) const
    {
        return Point2d(x * k, y * k);
    }

    Point2d operator/(double k) const
    {
        return Point2d(x / k, y / k);
    }

    // Imprimir
    void print() const
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }

};

#endif // POINT2D_H