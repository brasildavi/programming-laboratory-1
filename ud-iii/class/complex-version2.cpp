#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

class Complex {
    private:
        double real_part;
        double imaginary_part;
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

// Construtores

Complex::Complex(double r, double i) {
    real_part = r;
    imaginary_part = i;
}

Complex::Complex(const Complex &z) {
    real_part = z.real_part;
    imaginary_part = z.imaginary_part;
}

// Métodos

double Complex::absoluteValue() const {
    double result;
    result = sqrt(pow(real_part, 2) + pow(imaginary_part, 2));
    return result;
}

Complex Complex::conjugate() const {
    Complex result;
    result.real_part = real_part;
    result.imaginary_part = imaginary_part * (-1);
    return result;
}

void Complex::print() const {
    if (imaginary_part >= 0)
        cout << real_part << " + " << imaginary_part << " * i" << endl;
    else
        cout << real_part << " - " << (-1) * imaginary_part << " * i" << endl;
}

Complex Complex::addition(const Complex &z) const {
    Complex result;
    result.real_part = real_part + z.real_part;
    result.imaginary_part = imaginary_part + z.imaginary_part;
    return result;
}

Complex Complex::subtraction(const Complex &z) const {
    Complex result;
    result.real_part = real_part - z.real_part;
    result.imaginary_part = imaginary_part - z.imaginary_part;
    return result;
}

Complex Complex::multiplication(const Complex &z) const {
    Complex result;
    result.real_part = real_part * z.real_part - imaginary_part * z.imaginary_part;
    result.imaginary_part = real_part * z.imaginary_part + imaginary_part * z.real_part;
    return result;
}

Complex Complex::division(const Complex &z) const {
    Complex result, numerator(real_part, imaginary_part), denominator(z.real_part, z.imaginary_part), conjugate_denominator;
    double absoluteValue_denominator_squared;
    if(!(z.real_part == 0 && z.imaginary_part == 0)) {
        conjugate_denominator = denominator.conjugate();
        absoluteValue_denominator_squared = denominator.absoluteValue() * denominator.absoluteValue();
        result = numerator.multiplication(conjugate_denominator);
        result.real_part /= absoluteValue_denominator_squared;
        result.imaginary_part /= absoluteValue_denominator_squared;
        return result;
    } else {
        cout << "Error!" << endl;
        return Complex(); // 0 + 0 * i é o retorno padrão para erro quando estiver acompanhado de mensagem de erro.
    }
}

int main() {
    // Teste
    Complex a(134, -573);
    Complex b(28, 9);
    Complex c;
    double number;
    c = a.division(b);
    number = c.absoluteValue();
    a.print();
    b.print();
    c.print();
    cout << number << endl;
    return 0;
}
