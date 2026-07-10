#include <iostream>

void count() {
    static int cont = 0; // Inicializado apenas uma vez
    cont++;
    std::cout << "Count: " << cont << std::endl;
}

int main() {
    count(); // Count: 1
    count(); // Count: 2
    count(); // Count: 3
    return 0;
}
