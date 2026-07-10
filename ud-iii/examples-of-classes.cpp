#include <iostream>
#include <string>
#define TAM 100

using namespace std;

// Exemplos de aplicações dos conceitos de LOO

// Classe

class Account {
    char cpf[15];       // CPF do titular
    char name[TAM];     // Nome do titular
    float balance;      // Saldo disponível na conta corrente
    float creditLimit;  // Limite do cartão de crédito
};

class Date {
    public:
        int day, month, year;
};

class Doc {
    char author[TAM];
    Date arrivalDate;
    void print();
    void edit();
};

class Character {
    public:    
        string name;
        int age;
        string gender;
        void print(string str) {
            cout << str << endl;
        }
        void print(int integer) {
            cout << integer << endl;
        }
        void list() {
            print(name);
            print(age);
            print(gender);
        }
};

// Herança

class People {
    public:
        string name;
        Date birthDate;
};

class Professor : public People {
    public:    
        string badge; 
};

class Student : public People {
    public:
        string registration;
        string course;
};

int main() {
    return 0;
}
