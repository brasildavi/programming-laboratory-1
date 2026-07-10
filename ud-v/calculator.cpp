#include <iostream>

class Calculator {
    private:
        int n;
    public:
        Calculator() {
            n = 0;
        }
        Calculator &Add(int m) {
            n += m;
            return *this;
        }
        Calculator &Sub(int m) {
            n -= m;
            return *this;
        }
        Calculator &Mult(int m) {
            n *= m;
            return *this;
        }
        int getN() {
            return n;
        }
};

int main() {
    Calculator O;
    // O.Add(5);
    // O.Sub(3);
    // O.Mult(4);
    O.Add(5).Sub(3).Mult(4);
    std::cout << O.getN() << std::endl;
    return 0;
}