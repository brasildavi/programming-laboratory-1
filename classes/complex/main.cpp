#include "complex.h"

int main() {
    Complex a(134, -573);
    Complex b(28, 9);
    Complex c;
    c = a.division(b);
    c.print();
    return 0;
}
