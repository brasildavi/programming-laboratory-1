#include <iostream>

namespace Math {
    int sum(int a, int b) {
        int r = a + b;
        return r;
    }
}

int main() {
    std::cout << Math::sum(1, 2) << std::endl;
    return 0;
}