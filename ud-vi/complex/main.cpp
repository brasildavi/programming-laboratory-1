#include <iostream>
#include "complex.h"

int main() {
    Complex A(1,1), B(2,2), C(0,0);
    C = A + B; C.print();
    C = A - B; C.print();
    C = A * B; C.print();
    C = A + (double) 2; C.print();
    C = ++A; C.print();
    C = --A; C.print();
    C = A++; C.print();
    C = A--; C.print();
    std::cout << (A == B) << std::endl;
    std::cout << (A < B) << std::endl;
    std::cout << (A > B) << std::endl;
    std::cout << (A <= B) << std::endl;
    std::cout << (A >= B) << std::endl;
    C = A; C.print();
    C = 3; C.print();
    C += B; C.print();
    C += 5; C.print();
    std::cout << "C = " << "(" << C[0] << ", " << C[1] << ")" << std::endl;
    try {
        std::cout << C[2];
    } catch(const char *str) {
        std::cout << str << std::endl;
    }
    std::cout << A();
    // std::cout << (A && B) << std::endl;
    std::cout << (!A) << std::endl;
    Complex D(2.5, 3.2);
    std::cout << (int)D << std::endl;
    std::cout << (double)D << std::endl;
    return 0;
}
