#include <iostream>
#define TAM 100

char *setName () {
    // char name[TAM]; // VARIÁVEL LOCAL
    // static char name[TAM]; // VARIÁVEL ESTÁTICA
    char *name = new char[TAM]; // VARIÁVEL DINÂMICA
    std::cin >> name;
    return name;
}

int main() {
    char *str = setName();
    std::cout << str << std::endl;
    delete[] str;
    return 0;
}
