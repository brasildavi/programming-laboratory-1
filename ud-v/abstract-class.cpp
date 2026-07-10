#include <iostream>

// A classe abstrata funciona como um modelo obrigatório: ela define quais métodos as classes derivadas precisam ter, mas não fornece necessariamente a implementação desses métodos.

class X {
    public:
        virtual void f() = 0;
};

class Y : public X {
};

class Z : public X {
    public:
        void f() {
            std::cout << "Classe Z" << std::endl;
        }
};

int main() {
    // Y y; // NÃO É POSSÍVEL
    Z z;
    z.f();
    return 0;
}

/*
CLASSES ABSTRATAS

NÃO PODEM SER UTILIZADAS COMO:
- TIPOS DE PARÂMETRO
- TIPOS DE RETORNO
- CONVERSÕES EXPLÍCITAS
- OBJETO DECLARADO

PODEM SER UTILIZADAS COMO:
- PONTEIROS: CLASSE_ABSTRATA *A;
- REFERÊNCIAS
*/