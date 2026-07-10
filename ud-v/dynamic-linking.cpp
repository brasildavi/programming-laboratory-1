#include <iostream>

class A {
    public:
        virtual void f() {
            std::cout << "Classe A" << std::endl;
        }
};

class B : public A {
    public:
        void f() {
            std::cout << "Classe B" << std::endl;
        }
};

void g(A *a) {
    a->f();
}

int main() {
    B x; // Instanciação de um objeto da classe B
    g(&x); // A função g recebe o endereço de um objeto da classe B, mas seu argumento deve ser um endereço da classe A
    // Saída: Classe B
    return 0;
}
