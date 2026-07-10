#include <iostream>
#include <string>
#include <cstdlib>

class Employee {
    private:
        std::string name;
        double salaryBase;
    public:
        Employee(const std::string& name = "", double salaryBase = 0);
        std::string getName() const;
        void setName(const std::string& name);
        double getSalaryBase() const;
        void setSalaryBase(double salaryBase);
        void print() const;
};

class Manager : public Employee {
    private:
        double bonus;
    public:
        Manager(const std::string& name = "", double salaryBase = 0, double bonus = 0) : Employee(name, salaryBase), bonus(bonus) {}
        double calculateSalary() const;
        void print() const;
};

Employee::Employee(const std::string& name, double salaryBase) {
    (*this).name = name;
    (*this).salaryBase = salaryBase;
}

std::string Employee::getName() const {
    return name;
}

void Employee::setName(const std::string& name) {
    (*this).name = name;
}

double Employee::getSalaryBase() const {
    return salaryBase;
}

void Employee::setSalaryBase(double salaryBase) {
    (*this).salaryBase = salaryBase;
}

void Employee::print() const{
    std::cout << "Nome: " << getName() << "\n" << "Salário Base: R$ " << getSalaryBase() << std::endl;

}

double Manager::calculateSalary() const {
    return bonus + getSalaryBase();
}

void Manager::print() const{
    std::cout << "Nome: " << getName() << "\n" << "Salário Base: R$ " << getSalaryBase() << "\n" <<  "Salário Total: R$ " << calculateSalary() << std::endl;
}

int main() {
    Employee *f = new (std::nothrow) Employee("Oscar Martins", 15000);
    if (f == NULL) {
        std::cout << "Erro na alocação de memória!" << std::endl;
        exit(1);
    }
    Manager *g = new (std::nothrow) Manager("Isabel", 25000, 15000);
        if (g == NULL) {
            std::cout << "Erro na alocação de memória!" << std::endl;
            exit(1);
        }
        (*f).print();
        (*g).print();
        (*g).Employee::print();
        delete f;
        delete g;
    return 0;
}