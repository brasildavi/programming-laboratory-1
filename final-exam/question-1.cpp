#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Heroi {
    private:
        string nome;
        int nivel;
        static int contadorHeroi;
    public:
        Heroi(string nome, int nivel) : nome(nome), nivel(nivel) {
            contadorHeroi++;
        }
        ~Heroi() {
            contadorHeroi--;
        }
        string getNome() const {
            return nome;
        }
        int getNivel() const {
            return nivel;
        }
        virtual void atacar() = 0;
        static void totalHeroi() {
            cout << "Quantidade total de herois criados: " << contadorHeroi << endl;
        }
};

class Guerreiro : public Heroi {
    public:
        Guerreiro(string nome, int nivel) : Heroi(nome, nivel) {}
        void atacar() {
            cout << getNome() << " atacou com sua espada!" << endl;
        }
};

class Arqueiro : public Heroi {
    public:
        Arqueiro(string nome, int nivel) : Heroi(nome, nivel) {}
        void atacar() {
            cout << getNome() << " disparou uma flecha!" << endl;
        }
};

int Heroi::contadorHeroi = 0;

int main() {
    Guerreiro g1("Norris", 30), g2("Piastri", 35);
    Arqueiro a1("Verstappen", 70); 
    g1.atacar();
    g2.atacar();
    a1.atacar();
    Heroi::totalHeroi();
    return 0;
}
