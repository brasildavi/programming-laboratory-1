#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Carta {
    private:
        string nome;
        int poder;
    public:
        Carta(string nome, int poder);
        Carta operator+(int i);
        friend Carta operator+(int i, Carta c);
        void imprimirCarta() const;
};

Carta::Carta(string nome, int poder) : nome(nome), poder(poder) {}

Carta Carta::operator+(int i) {
    return Carta(nome, poder + i);
}

Carta operator+(int i, Carta c) {
    return Carta(c.nome, i + c.poder);
}

void Carta::imprimirCarta() const {
    cout << "Nome: " << nome << " | " << "Poder: " << poder << endl;
}

int main() {
    Carta carta("Caio Harley", 80);
    carta.imprimirCarta();
    Carta cartaTemp1 = carta + 10;
    cartaTemp1.imprimirCarta();
    Carta cartaTemp2 = 10 + carta;
    cartaTemp2.imprimirCarta();
    return 0;
}
