#include <iostream>
#include <new>
#include <cstdlib>

using std::cout;
using std::nothrow; // Permite que o new retorne NULL em caso de erro
using std::exit;

class VetorSeguro {
    private:
        int *dados;
        int tamanho;
    public:
        // Construtor verificando retorno NULL sem try/catch
        VetorSeguro(int tam) : tamanho(tam) {
            if (tamanho < 0) {
                tamanho = 0;
            }
            // O nothrow faz o new retornar NULL em vez de lançar exceção nativa
            dados = new (nothrow) int[tamanho] ();
            // Verificação direta do ponteiro
            if (dados == NULL) {
                tamanho = 0;
                throw "Erro: Falha de memória ao alocar o vetor!";
            }
        }
        // Destrutor para liberar memória
        ~VetorSeguro() {
            delete[] dados;
        }
        // Sobrecarga do operador []
        int& operator[](int index) {
            if (index < 0 || index >= tamanho) {
                throw "Erro: Índice fora dos limites!";
            }
            return dados[index];
        }
};

int main() {
    try { // Testa tanto a alocação dinâmica quanto o acesso aos índices válidos
        VetorSeguro meuVetor(5);

        // Usando o operador sobrecarregado para atribuição
        meuVetor[0] = 10;
        meuVetor[3] = 42;

        // Usando para leitura
        cout << "Elemento 0: " << meuVetor[0] << "\n";
        cout << "Elemento 3: " << meuVetor[3] << "\n";

        // Testando acesso inválido
        meuVetor[100] = 7;
    } catch (const char* msg) {
        cout << "Exceção capturada: " << msg << "\n";
        exit(1);
    }
    return 0;
}
