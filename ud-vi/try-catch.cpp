#include <iostream>

int main() {
    try {
        // BLOCO SUSCETÍVEL A ERRO
    } catch (const char *str) {
        std::cout << str << std::endl;
    }
    return 0;
}