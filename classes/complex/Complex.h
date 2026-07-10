#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
    private:
        double realPart;
        double imaginaryPart;
    public:
        Complex(double r = 0, double i = 0);
        Complex(const Complex &z);
        double absoluteValue() const;
        Complex conjugate() const;
        void print() const;
        Complex addition(const Complex &z) const;
        Complex subtraction(const Complex &z) const;
        Complex multiplication(const Complex &z) const;
        Complex division(const Complex &z) const;
};

#endif
