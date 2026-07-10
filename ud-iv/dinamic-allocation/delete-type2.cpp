#include <iostream>

int main() {
    int *ptr, t;
    std::cin >> t;
    ptr = new (std::nothrow) int[t];
    if (ptr == NULL) {
        std::cout << "Erro!" << std::endl;
    } else {
        std::cout << "Olá, mundo!" << std::endl;
        delete[] ptr;
    }
    return 0;
}