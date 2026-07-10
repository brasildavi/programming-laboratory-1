#include <iostream>

class Complex {
    private:
        double r, i;
    public:
        Complex(double r, double i);
};

Complex::Complex(double r, double i) : r(r), i(i) {}

class Quaternion {
    private:
        double a, b, c, d;
    public:
        Quaternion(double a, double b, double c, double d);
};

Quaternion::Quaternion(double a, double b, double c, double d) : a(a), b(b), c(c), d(d) {}