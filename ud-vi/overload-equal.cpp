#include <iostream>

class Base {
    public:
        Base& operator=(const Base& other) {
            std::cout << "Operator = of Base called." << std::endl;
            if (this != &other) {
                // ATRIBUIÇÃO
            }
            return *this;
        }
        // A FUNÇÃO RETORNA UMA REFERÊNCIA PARA O PRÓPRIO OBJETO QUE RECEBEU A ATRIBUIÇÃO -> ENCADEAR ATRIBUIÇÕES
};

class Heritage : public Base {
    public:
        Heritage& operator=(const Heritage& other) {
            if (this != &other) {
                Base::operator=(other);
                std::cout << "Operator = of Heritage called." << std::endl;
            }
            return *this;
        }
};

int main() {
    Heritage d1, d2;
    d1 = d2;
    return 0;
}