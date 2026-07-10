#include <iostream>

int square(int x) {return x * x;};
double square(double x) {return x * x;};

int main() {
    std::cout << square(7) << std::endl;
    std::cout << square(7.5) << std::endl;
    return 0;
}
