#include <iostream>

int main() {
    int t = 0;
    int *v = NULL;
    std::cout << "Digite um número: ";
    std::cin >> t;
    v = new int[t];
    v[t - 1] = 1;
    std::cout << v[t - 1] << std::endl;
    std::cout << sizeof(v) / sizeof(int) << std::endl;
    return 0;
}
