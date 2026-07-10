#include <iostream>
#include <string>

class X {
    private:
        static std::string name;
    public:
        // MÉTODOS ESTÁTICOS APENAS PODEM ACESSAR ATRIBUTOS ESTÁTICOS
        static void printName() {
            std::cout << name << std::endl;
        }
};

std::string X::name = "X";

int main() {
    X::printName();
    return 0;
}