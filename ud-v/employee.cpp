#include <iostream>
#include <string>

class Employee {
    private:
        const std::string name;
        double salary;
        int branch; // Ramal
        static int count; // Variável de Classe -- Atributo Estático
    public:
        Employee(std::string name, double salary, int branch);
        Employee(const Employee&);
        ~Employee();
        std::string readName() const;
        double readSalary() const;
        int readBranch() const;
        void writeSalary(double s);
        void writeBranch(int b);
        static void countEmployee();
};

int Employee::count = 0;

Employee::Employee(std::string name, double salary, int branch) : name(name), salary(salary), branch(branch) {
    count++;
    countEmployee();
}

Employee::Employee(const Employee& other) : name(other.name), salary(other.salary), branch(other.branch) {
    count++;
    countEmployee();
}

Employee::~Employee() {
    count--;
    countEmployee();
}

std::string Employee::readName() const {
    return name;
}

double Employee::readSalary() const {
    return salary;
}

int Employee::readBranch() const {
    return branch;
}

void Employee::writeSalary(double s) {
    salary = s;
}

void Employee::writeBranch(int b) {
    branch = b;
}

void Employee::countEmployee() {
    if ((0 <= count) && (count < 10)) {
        std::cout << "Quantidade de funcionários: Abaixo do mínimo permitido!" << std::endl;
    } else {
        if (count > 50) {
            std::cout << "Quantidade de funcionários: Acima do máximo permitido!" << std::endl;
        } else {
            std::cout << "Quantidade de funcionários: Permitida!" << std::endl;
        }
    }
    return;
}
