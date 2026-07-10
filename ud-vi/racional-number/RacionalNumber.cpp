#include <iostream>
#include "RacionalNumber.h"

int absoluteValue(int i) {
    return ((i >= 0) ? i : -i);
}

int mdc(int x, int y) {
    int mdc = 1;
    if (x == 0) {
        mdc = y;
    } 
    else {
    int min = ((absoluteValue(x) <= absoluteValue(y)) ? absoluteValue(x) : absoluteValue(y));
    for (int i = 1; i <= min; i++) {
        if ((x % i == 0) && (y % i == 0)) {
            mdc = i;
        }
    }
    }
    return mdc;
}

// Algoritmo de Euclides:
// int mdc(int a, int b) {
//     while (b != 0) {
//         int r = a % b;
//         a = b;
//         b = r;
//     }
//     return a;
// }

RacionalNumber::RacionalNumber(int x, int y) {
    if (y == 0) {
        throw std::invalid_argument("Zero denominator!"); // SE RELACIONA COM TRY/CATCH
        // throw "Zero denominator!";
    }
    if (y < 0) {
        y *= (-1);
        x *= (-1);
    }
    int m = mdc(x, y);
    p = x / m;
    q = y / m;
}

void RacionalNumber::print() const {
    std::cout << p << " / " << q << std::endl;
}

RacionalNumber RacionalNumber::operator+(RacionalNumber x) {
    return RacionalNumber(p * x.q + x.p * q, q * x.q);
}

RacionalNumber RacionalNumber::operator/(RacionalNumber x) {
    return RacionalNumber(p * x.q, q * x.p);
}

RacionalNumber& RacionalNumber::operator++() {
    p += q;
    return *this;
}

RacionalNumber RacionalNumber::operator++(int i) {
    RacionalNumber temp = *this;
    p += q;
    return temp;
}

RacionalNumber::operator float() {
    return ((float)p)/((float)q);
}