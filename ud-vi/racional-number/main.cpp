#include <iostream>
#include <cstdlib>
#include "RacionalNumber.h"

int main() {
    RacionalNumber A(5, 3), B(7, 3), C(9, 3);
    A++;
    A.print();
    A = B + C;
    A.print();
    std::cout << (float) A << std::endl;
    try {
        RacionalNumber D(1, 0);
    } catch (const char *err) {
        std::cout << "Error: " << err << std::endl;
        std::exit(1);
    }
    return 0;
}
