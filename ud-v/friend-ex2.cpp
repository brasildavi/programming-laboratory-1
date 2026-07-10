// MODIFICADOR FRIEND

#include <iostream>

class X;

class Y {
    public:
        void imprimir(X &x);
};

class X {
    private:
        int a, b;
        friend void Y::imprimir(X &x);
    public:
        X() : a(0), b(1) {}
};

void Y::imprimir(X &x) {
    std::cout << x.a << std::endl;
    std::cout << x.b << std::endl;
}

int main() {
    X x;
    Y y;
    y.imprimir(x);
    return 0;
}