#include <iostream>
#include <cmath>
#include "complex.h"

using std::cout;
using std::endl;

Complex::Complex(double r, double i) {
    realPart = r;
    imaginaryPart = i;
}

Complex::Complex(const Complex &z) {
    realPart = z.realPart;
    imaginaryPart = z.imaginaryPart;
}

double Complex::absoluteValue() const {
    double result;
    result = sqrt(pow(realPart, 2) + pow(imaginaryPart, 2));
    return result;
}

Complex Complex::conjugate() const {
    Complex result;
    result.realPart = realPart;
    result.imaginaryPart = imaginaryPart * (-1);
    return result;
}

void Complex::print() const {
    if (imaginaryPart >= 0)
        cout << realPart << " + " << imaginaryPart << " * i" << endl;
    else
        cout << realPart << " - " << (-1) * imaginaryPart << " * i" << endl;
}

Complex Complex::addition(const Complex &z) const {
    Complex result;
    result.realPart = realPart + z.realPart;
    result.imaginaryPart = imaginaryPart + z.imaginaryPart;
    return result;
}

Complex Complex::subtraction(const Complex &z) const {
    Complex result;
    result.realPart = realPart - z.realPart;
    result.imaginaryPart = imaginaryPart - z.imaginaryPart;
    return result;
}

Complex Complex::multiplication(const Complex &z) const {
    Complex result;
    result.realPart = realPart * z.realPart - imaginaryPart * z.imaginaryPart;
    result.imaginaryPart = realPart * z.imaginaryPart + imaginaryPart * z.realPart;
    return result;
}

Complex Complex::division(const Complex &z) const {
    Complex result, numerator(realPart, imaginaryPart), denominator(z.realPart, z.imaginaryPart), conjugateDenominator;
    double absoluteValueDenominatorSquared;
    if(!(z.realPart == 0 && z.imaginaryPart == 0)) {
        conjugateDenominator = denominator.conjugate();
        absoluteValueDenominatorSquared = denominator.absoluteValue() * denominator.absoluteValue();
        result = numerator.multiplication(conjugateDenominator);
        result.realPart /= absoluteValueDenominatorSquared;
        result.imaginaryPart /= absoluteValueDenominatorSquared;
        return result;
    } else {
        cout << "Error!" << endl;
        return Complex(); // 0 + 0 * i é o retorno padrão para erro quando estiver acompanhado de mensagem de erro.
    }
}