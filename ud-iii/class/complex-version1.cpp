#include <iostream>
using namespace std;

class Complex {
    private:
        double r;
        double i;
    public:
        Complex(double real = 0, double imaginary = 0) {
            r = real;
            i = imaginary;
        }
        Complex sum(Complex z) {
            Complex result;
            result.r = r + z.r;
            result.i = i + z.i;
            return result;
        }
        Complex multiplication(Complex z) {
            Complex result;
            result.r = r * z.r - i * z.i;
            result.i = r * z.i + i * z.r;
            return result;
        }
        void print() {
            cout << r << " + " << i << "i" << endl; 
        }
};

int main() {
    Complex a(3, 4), b(5, 12), c, d;
    c = a.sum(b);
    d = a.multiplication(b);
    c.print();
    d.print();
    return 0;
}
