#include <iostream>
#include <cstdlib>

using std::nothrow;
using std::cout;
using std::endl;

class Arma {
    private:
        int poderDeFogo;
    public:
        Arma(int poderDeFogo) : poderDeFogo(poderDeFogo) {}
        int getPoderDeFogo() const {
            return poderDeFogo;
        }
        void setPoderDeFogo(int other_poderDeFogo) {
            poderDeFogo = other_poderDeFogo;
        }
        Arma& operator=(const Arma& other) {
            if (this != &other) {
                poderDeFogo = other.poderDeFogo;
            }
            return *this;
        }
};

class Blindagem {
    private:
        int resistencia;
    public:
        Blindagem(int resistencia) : resistencia(resistencia) {}
        int getResistencia() const {
            return resistencia;
        }
        void setResistencia(int other_resistencia) {
            resistencia = other_resistencia;
        }
        Blindagem& operator=(const Blindagem& other) {
            if (this != &other) {
                resistencia = other.resistencia;
            }
            return *this;
        }
};

class Robo : public Arma, public Blindagem {
    private:
        int *energia;
    public:
        Robo(int *ptr_energia, int poderDeFogo, int resistencia) : Arma(poderDeFogo), Blindagem(resistencia) {
            energia = new (nothrow) int(*ptr_energia);
            if (energia == NULL) {
                cout << "Erro na alocação de memória!" << endl;
                exit(1);
            }
        }
        ~Robo() {
            delete energia;
        }
        Robo& operator=(const Robo& other) {
            if (this != &other) {
                delete energia;
                energia = new (nothrow) int(*(other.energia));
                if (energia == NULL) {
                    cout << "Erro na alocação de memória!" << endl;
                    exit(1);
                }
                Arma::operator=(other);
                Blindagem::operator=(other);
            }
            return *this;
        }
        Robo& operator++() {
            (*energia)++;
            return *this;
        }
        Robo operator++(int i) {
            int energiaTemp = *energia;
            Robo temp(&energiaTemp, this->getPoderDeFogo(), this->getResistencia());
            (*energia)++;
            return temp;
        }
        void imprimirRobo() const {
            cout << "====== Robo ======" << endl;
            cout << "Energia: " << *energia << endl;
            cout << "Poder de fogo: " << getPoderDeFogo() << endl;
            cout << "Resistencia: " << getResistencia() << endl;
            cout << "\n";
        }
};

int main() {
    int e1 = 10, e2 = 20, e3 = 30;
    Robo r1(&e1, 1000, 250), r2(&e2, 800, 650);
    
    cout << "ITEM A" << endl;
    r1.imprimirRobo();
    r2.imprimirRobo();
    
    cout << "ITEM B" << endl;
    r1 = r2;
    r1.imprimirRobo();
    
    cout << "ITEM C" << endl;
    r1.imprimirRobo();
    r2 = ++r1;
    r2.imprimirRobo();
    r1.imprimirRobo();
    r2 = ++(++r1);
    r2.imprimirRobo();

    cout << "ITEM D" << endl;
    r1.imprimirRobo();
    r2 = r1++;
    r2.imprimirRobo();

    return 0;
}
