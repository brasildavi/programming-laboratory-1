#include <iostream>

int main() {
    int t = 0;
    int *v;
    std::cout << "Digite um número: ";
    std::cin >> t;
    v = new int[t];
    delete[] v;
    return 0;
}