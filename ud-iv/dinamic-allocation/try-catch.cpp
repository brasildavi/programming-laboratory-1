#include <iostream>

int main() {
    int *ptr, t;
    std::cin >> t;
    try {
        ptr = new int[t];
        delete[] ptr;
    }
    catch(...) {
        std::cout << "Erro!" << std::endl;
    }
    return 0;
}