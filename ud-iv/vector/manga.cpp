#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iterator>
#include <limits>

class Manga {
    private:
        std::string title;
        float grade;
    public:
        Manga(const std::string &t, float g);
        void imprimir() const;
        std::string getTitle() const;
        void setTitle(std::string t);
        float getGrade() const;
        void setGrade(float g);
};

Manga::Manga(const std::string &t, float g) : title(t), grade(g) {}

void Manga::imprimir() const {
        std::cout << "Mangá: " << title << " - " << "Avaliação: " << grade << std::endl;
}

std::string Manga::getTitle() const {
    return title;
}

void Manga::setTitle(std::string t) {
    title = t;
}

float Manga::getGrade() const {
    return grade;
}

void Manga::setGrade(float g) {
    grade = g;
}

std::vector<std::string> collection_title = {"One Piece", "Dragon Ball", "Naruto", "Demon Slayer"};
std::vector<float> collection_grade = {10, 8, 9.4, 9.2};

int main () {
    std::vector<Manga> collection;
    for (int i = 0; i < collection_title.size(); i++) {
        collection.emplace_back(collection_title[i], collection_grade[i]);
    }
    int choice_1 = 0, choice_2 = 0, choice_3 = 0, choice_4 = 0;
    while(true) {
        // Menu
        std::cout << "Como você quer imprimir a relação de mangás?\n1 - Ordem alfabética\n2 - Ordem de notas" << std::endl;
        std::cin >> choice_1;
        std::cout << "Nesse caso, será em ordem crescente ou descrescente?\n1 - Ordem crescente\n2 - Ordem descrescente" << std::endl;
        std::cin >> choice_2;
        std::cout << "Além disso, gostaria de adicionar ou remover um mangá?\n1 - Adicionar\n2 - Remover\n3 - Continuar" << std::endl;
        std::cin >> choice_3;

        // CORE
        std::string manga;
        float grade = 0;
        
        // Adição/Remoção
        if (choice_3 == 1) {
            std::cout << "Qual o nome do mangá que você deseja adicionar? ";
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::getline(std::cin, manga);
            std::cout << "Qual a sua nota? ";
            std::cin >> grade;
            collection.emplace_back(manga, grade);
        } else {
            if (choice_3 == 2) {
                std::cout << "Qual o nome do mangá que você deseja remover? ";
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::getline(std::cin, manga);
                collection.erase(
                    remove_if(
                        collection.begin(), 
                        collection.end(), 
                        [manga](const Manga &obj) {
                            return obj.getTitle() == manga;
                        }
                    ),
                    collection.end()
                );
            } else {
                if (choice_3 != 3) {
                    std::cout << "Opção inválida!" << std::endl;
                    break;
                }
            }
        }

        // Ordenação
        if (choice_1 == 1) {
            std::sort(collection.begin(), collection.end(),
                [](const Manga &a, const Manga &b) {
                    return a.getTitle() < b.getTitle();
                }
            );
        } else {
            if (choice_1 == 2) {
                std::sort(collection.begin(), collection.end(),
                    [](const Manga &a, const Manga &b) {
                        return a.getGrade() < b.getGrade();
                    }
                );
            } else {
                std::cout << "Opção inválida!" << std::endl;
                break;
            }
        }
        if (choice_2 == 2) {
                std::reverse(collection.begin(), collection.end());
        } else {
            if (choice_2 != 1) {
                std::cout << "Opção inválida!" << std::endl;
                break;
            }
        }

        // Saída
        std::cout << "Por fim, você deseja finalizar o programa?\n1 - Sim\n2 - Não" << std::endl;
        std::cin >> choice_4;
        if (choice_4 == 1) {
            for (int i = 0; i < collection.size(); i++) {
                collection[i].imprimir();
            }
            std::cout << "Saindo do programa..." << std::endl;
            break;
        } else {
            if (choice_4 != 2) {
                std::cout << "Opção inválida!" << std::endl;
                break;
            }
        }
    }
    return 0;
}