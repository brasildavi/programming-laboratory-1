#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class SabreDeLuz {
    private:
        string cor;
        int nívelDeEnergia;
        string tipoDeDono; // Jedi (Light Side) ou Sith (Dark Side)
    public:
        SabreDeLuz(string cor = "", int nívelDeEnergia = 0, string tipoDeDono = "") : cor(cor), nívelDeEnergia(nívelDeEnergia), tipoDeDono(tipoDeDono) {}
        SabreDeLuz operator+(SabreDeLuz other) {
            return SabreDeLuz(cor + "," + other.cor, nívelDeEnergia + other.nívelDeEnergia, ((tipoDeDono == "Sith") || (other.tipoDeDono == "Sith")) ? "Sith" : "Jedi");
        }
        bool operator!() {
            return (nívelDeEnergia > 0) ? true : false; // True - O sabre de luz possui energia; False - O sabre de luz não possui energia
        }
        string getCor() const {
            return cor;
        }
        int getNívelDeEnergia() const {
            return nívelDeEnergia;
        }
        string getTipoDeDono() const {
            return tipoDeDono;
        }
        void alterarEnergia(int pontos) {
            nívelDeEnergia += pontos;
        }
};

class Guerreiro {
    private:
        string nome;
        SabreDeLuz espadaDeEnergia;
        int nívelDeHabilidade;
        bool ladoDaForça; // 1 - Light; 0 - Dark
    public:
        Guerreiro(string nome = "", string cor = "", int níveldeEnergia = 0, string tipoDeDono = "", int nívelDeHabilidade = 0, bool ladoDaForça = 0) : nome(nome), espadaDeEnergia(cor, níveldeEnergia, tipoDeDono), nívelDeHabilidade(nívelDeHabilidade), ladoDaForça(ladoDaForça) {
            if (ladoDaForça == 1 && espadaDeEnergia.getTipoDeDono() == "Sith") {
                throw "Um Jedi (Light Side) não pode ter uma espada de um Sith!";
            }
        }
        Guerreiro& operator*(Guerreiro& other) {
            int nívelDeHabilidadeT = nívelDeHabilidade;
            int nívelDeEnergiaT = espadaDeEnergia.getNívelDeEnergia();
            int poderT = nívelDeHabilidadeT + nívelDeEnergiaT;
            int other_nívelDeHabilidadeT = other.nívelDeHabilidade;
            int other_nívelDeEnergiaT = other.espadaDeEnergia.getNívelDeEnergia();
            int other_poderT = other_nívelDeHabilidadeT + other_nívelDeEnergiaT;
            if (ladoDaForça == 0) {
                nívelDeHabilidadeT = nívelDeHabilidade * 1.10;
                nívelDeEnergiaT = espadaDeEnergia.getNívelDeEnergia() * 1.10;
                poderT = nívelDeHabilidadeT + nívelDeEnergiaT;
            } 
            if (other.ladoDaForça == 0) {
                other_nívelDeHabilidadeT = other.nívelDeHabilidade * 1.10;
                other_nívelDeEnergiaT = other.espadaDeEnergia.getNívelDeEnergia() * 1.10;
                other_poderT = other_nívelDeHabilidadeT + other_nívelDeEnergiaT;
            } 
            if (poderT > other_poderT) {
                espadaDeEnergia.alterarEnergia(-10);
                nívelDeHabilidade += 5;
                other.espadaDeEnergia.alterarEnergia(-(other.espadaDeEnergia).getNívelDeEnergia());
                return *this;
            }
            else {
                (other.espadaDeEnergia).alterarEnergia(-10);
                other.nívelDeHabilidade += 5;
                espadaDeEnergia.alterarEnergia(-espadaDeEnergia.getNívelDeEnergia());
                return other;
            }
        }
        void print() const {
            cout << "===== " << "Guerreiro " << nome << " =====" << endl;
            cout << "-> Espada de energia " << espadaDeEnergia.getCor() << " do " << espadaDeEnergia.getTipoDeDono() << ": " << espadaDeEnergia.getNívelDeEnergia() << " pontos" << endl;
            cout << "-> Nível de habilidade: " << nívelDeHabilidade << " pontos" << endl;
            cout << "-> Lado da força: " << ((ladoDaForça == false) ? ("Darkside") : ("Lightside")) << endl;
        }
};

int main() {
    Guerreiro G1("Davi Brasil", "cinza", 30, "Jedi", 55, true);
    G1.print();
    Guerreiro G2("Bruno Mariano", "rosa-bebê", 15, "Sith", 70, false);
    G2.print();
    (G1*G2).print();
    return 0;
}