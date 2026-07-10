#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
    private:
        double r, i;
    public:
        Complex(double r = 0, double i = 0);
        Complex(const Complex& z);

        void print() const;

        double absoluteValue();

        Complex operator++();
        Complex operator++(int i);
        Complex operator--();
        Complex operator--(int i);

        Complex operator+(Complex z);
        Complex operator+(double real); // COMPLEX + DOUBLE
        friend Complex operator+(double real, Complex z); // DOUBLE + COMPLEX

        Complex operator-(Complex z);
        Complex operator-(double real);
        friend Complex operator-(double real, Complex z);

        Complex operator*(Complex z);

        bool operator==(Complex z);
        bool operator<(Complex z);
        bool operator<=(Complex z);
        bool operator>(Complex z);
        bool operator>=(Complex z);
        // bool operator&&(Complex z);
        bool operator!();


        Complex operator=(const Complex other);
        Complex operator=(const double other);
        Complex operator+=(const Complex other);
        Complex operator+=(const double other);

        double& operator[](int index);

        double operator()();

        operator double();
        operator int();
        // operator Quaternion();
        // Complex(Quaternion q);
};

#endif