#include <iostream>

class X {
    public:
        static int i;
};

int X::i = 0; 

int main() {
    X x1, x2;
    std::cout << x1.i << std::endl;
    x1.i = 5;
    std::cout << x2.i << std::endl;
    std::cout << X::i << std::endl;
    return 0;
}