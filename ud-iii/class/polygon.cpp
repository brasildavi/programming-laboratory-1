#include <iostream>
#include <cmath>

using namespace std;

// Classes

class Polygon {
    protected:
        int side;
        double length;
    public:
        Polygon(int side = 0, double length = 0);
        int sumInternAngle();
        double perimeter();
};

class Square : public Polygon {
    public:
        Square(double length = 0);
        double area();
};

class Triangle : public Polygon {
    public:
        Triangle(double length = 0);
        double area();
};

int main() {
    Polygon pentagon(5, 3);
    Square square(2);
    Triangle triangle(1);
    cout << ">>> Area" << endl;
    cout << "Square: " << square.area() << endl;
    cout << "Triangle: " << triangle.area() << endl;
    cout << ">>> Perimeter" << endl;
    cout << "Pentagon: " << pentagon.perimeter() << endl;
    cout << "Square: " << square.perimeter() << endl;
    cout << "Triangle: " << triangle.perimeter() << endl;
    cout << ">>> SIA" << endl;
    cout << "Pentagon: " << pentagon.sumInternAngle() << endl;
    cout << "Square: " << square.sumInternAngle() << endl;
    cout << "Triangle: " << triangle.sumInternAngle() << endl;
    return 0;
}

// Implementações

Polygon::Polygon(int side, double length) : side(side), length(length) {}

int Polygon::sumInternAngle() {
    int r = (side - 2) * 180;
    return r;
}

double Polygon::perimeter() {
    double r = side * length;
    return r;
}

Square::Square(double length) : Polygon(4, length) {}

double Square::area() {
    double a = length * length;
    return a;
}

Triangle::Triangle(double length) : Polygon(3, length) {}

double Triangle::area() {
    double a = (sqrt(3) / 4) * length * length;
    return a;
}
