#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using std::vector;
using std::string;
using std::nothrow;
using std::cout;
using std::endl;

class Inventario {
    private:
        vector<string> itens;
    public:
        void adicionarItens(string item) {
            itens.push_back(item);
        }
        string& operator[](int indice) {
            if (indice < 0 || itens.size() <= indice) {
                throw "Erro: Indice fora dos limites!";
            }
            return itens[indice];
        }
};

int main() {
    Inventario mochila;
    mochila.adicionarItens("Laterna");
    mochila.adicionarItens("Agua");
    mochila.adicionarItens("Bulssola");
    mochila.adicionarItens("Corda");
    mochila.adicionarItens("Comida");
    cout << "Terceiro item do inventario: " << mochila[2] << endl;
    try {
        cout << "Sexto item do inventario: " << mochila[5] << endl;
    } catch (const char* msg) {
        cout << "Exceção capturada: " << msg << "\n";
        exit(1);
    }
    return 0;
}
