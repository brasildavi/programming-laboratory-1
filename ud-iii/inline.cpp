#include <iostream>

class  Calculator {
    private:
        int x;
    public:
        Calculator(int x = 0);
        int minimum(int y);
        // int maximum(int y);
        int maximum(int x, int y);
};

int main() {
    Calculator x(1);
    std::cout << x.maximum(1, 2) << std::endl;
    return 0;
}

Calculator::Calculator(int a) {
    x = a;
}

int Calculator::minimum(int y) {
    return (x > y) ? y : x;
}

// int Calculator::maximum(int y) {
//     return (x > y) ? x : y;
// }

inline int Calculator::maximum(int x, int y) {
    return (x > y) ? x : y;
}
