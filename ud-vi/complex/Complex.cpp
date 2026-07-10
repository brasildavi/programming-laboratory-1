#include <iostream>
#include <cmath>
#include "complex.h"

Complex::Complex(double r, double i) : r(r), i(i) {}

Complex::Complex(const Complex& z) {
    r = z.r;
    i = z.i;
}

void Complex::print() const {
    if (i >= 0) {
        std::cout << r << " + " << i << "i" << std::endl;
    } else {
        std::cout << r << " - " << (-1) * i << "i" << std::endl;
    }
}

double Complex::absoluteValue() {
    return sqrt(r * r + i * i);
}

Complex Complex::operator++() {
    r++;
    return *this;
}

Complex Complex::operator--() {
    r--;
    return *this;
}

Complex Complex::operator++(int i) {
    Complex temp = *this;
    r++;
    return temp;
}

Complex Complex::operator--(int i) {
    Complex temp = *this;
    r--;
    return temp;
}

Complex Complex::operator+(Complex z) {
    return Complex(r + z.r, i + z.i);
}

Complex Complex::operator+(double real) {
    return Complex(r + real, i);
}

Complex operator+(double real, Complex z) {
    return Complex(real + z.r, z.i);
}

Complex Complex::operator-(Complex z) {
    return Complex(r - z.r, i - z.i);
}

Complex Complex::operator-(double real) {
    return Complex(r - real, i);
}

Complex operator-(double real, Complex z) {
    return Complex(real - z.r, z.i);
}

Complex Complex::operator*(Complex z) {
    return Complex(r * z.r - i * z.i, r * z.i + i * z.r);
}

bool Complex::operator==(Complex z) {
    return ((r == z.r) && (i == z.i));
}

bool Complex::operator<(Complex z) {
    return absoluteValue() < z.absoluteValue();
}

bool Complex::operator<=(Complex z) {
    return absoluteValue() <= z.absoluteValue();
}

bool Complex::operator>(Complex z) {
    return absoluteValue() > z.absoluteValue();
}

bool Complex::operator>=(Complex z) {
    return absoluteValue() >= z.absoluteValue();
}

Complex Complex::operator=(const Complex other) {
    if (this != &other) {
        r = other.r;
        i = other.i;
    }
    return *this;
}

Complex Complex::operator=(const double other) {
    r = other;
    i = 0;
    return *this;
}

Complex Complex::operator+=(const Complex other) {
    r += other.r;
    i += other.i;
    return *this;
}

Complex Complex::operator+=(const double other) {
    r += other;
    return *this;
}

double& Complex::operator[](int index) {
    if (index == 1) {
        return i;
    } 
    else {
    if (index == 0) {
        return r;
    }
    else {
        throw "Invalid!";
    }
    }
}

double Complex::operator()() {
    return absoluteValue();
}

// bool Complex::operator&&(Complex z) {
//     return ((r || z.r) && (i + z.i));
// }

// RETORNA TRUE SE O NÚMERO FOR ZERO
bool Complex::operator!() {
    return !(r || i);
}

Complex::operator double() {
    return r;
}

Complex::operator int() {
    return (int) r;
}

// Complex::operator Quaternion() {
//     return Quaternion(r, i, 0, 0);
// }

// Complex::Complex(Quaternion q) {
//     r = q.r;
//     i = q.i;
// }
