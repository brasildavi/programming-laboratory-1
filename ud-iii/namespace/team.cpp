#include <iostream>

namespace TeamA {
    void lineup() {
        std::cout << "1- Everson" << std::endl;
        std::cout << "2 - Natanael" << std::endl;
        std::cout << "3 - Ruan" << std::endl;
        std::cout << "4 - Lyanco" << std::endl;
        std::cout << "5 - Renan Lodi" << std::endl;
        std::cout << "6 - Alan Franco" << std::endl;
        std::cout << "7 - Cuello" << std::endl;
        std::cout << "8 - Tomás Pérez" << std::endl;
        std::cout << "9 - Renier" << std::endl;
        std::cout << "10 - Hulk" << std::endl;
        std::cout << "11 - Victor Hugo" << std::endl;
    }
}

namespace TeamB {
    void lineup() {
        std::cout << "1- Richard" << std::endl;
        std::cout << "2 - Alex Silva" << std::endl;
        std::cout << "3 - Éder" << std::endl;
        std::cout << "4 - Luizão" << std::endl;
        std::cout << "5 - Fernando" << std::endl;
        std::cout << "6 - Lucas Lima" << std::endl;
        std::cout << "7 - Fernandinho" << std::endl;
        std::cout << "8 - Diego" << std::endl;
        std::cout << "9 - Wendel Silva" << std::endl;
        std::cout << "10 - Vina" << std::endl;
        std::cout << "11 - Juan Alano" << std::endl;
    }
}

int main() {
    std::cout << "Atlético-MG" << std::endl;
    TeamA::lineup();
    std::cout << "\n";
    std::cout << "Ceará-SC" << std::endl;
    TeamB::lineup();
    std::cout << "\n";
    return 0;
}