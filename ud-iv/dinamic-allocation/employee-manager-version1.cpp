#include <iostream>
#include <string>

class Employee {
    private:
        std::string name;
        double salaryBase;
    public:
        Employee(std::string userName = "", double userSalaryBase = 0);
        void setName(std::string userName);
        std::string getName() const;
        void setSalaryBase(double userSalaryBase);
        double getSalaryBase() const;
        void visualize() const;
};

class Manager : public Employee {
    private:
        double bonus;
    public:
        Manager(std::string userName = "", double userSalaryBase = 0, double userBonus = 0);
        double computeSalary() const;
        void visualize() const;
};

int main() {
    Employee *pointerAnalyst = new (std::nothrow) Employee("Davi Brasil", 12500);
    if (pointerAnalyst == NULL) {
        std::cout << "Error!" << std::endl;
        return;
    }
    pointerAnalyst->visualize();
    delete pointerAnalyst;
    Manager *pointerAnalystSenior = new (std::nothrow) Manager("Rafael Duarte", 20000, 10000);
    if (pointerAnalyst == NULL) {
        std::cout << "Error!" << std::endl;
        return;
    }
    pointerAnalystSenior->visualize();
    delete pointerAnalystSenior;
    return 0;
}

Employee::Employee(std::string userName, double userSalaryBase) : name(userName), salaryBase(userSalaryBase) {}

void Employee::setName(std::string userName) {
    name = userName;
}

void Employee::setSalaryBase(double userSalaryBase) {
    salaryBase = userSalaryBase;
}

std::string Employee::getName() const {
    return name;
}

double Employee::getSalaryBase() const {
    return salaryBase;
}

void Employee::visualize() const {
    std::cout << "Name: " << name << " - " << "Salary: " << salaryBase << std::endl;
}

Manager::Manager(std::string userName, double userSalaryBase, double userBonus) : Employee(userName, userSalaryBase), bonus(userBonus) {}

double Manager::computeSalary() const {
    double total = getSalaryBase() + bonus;
    return total;
}

void Manager::visualize() const {
    std::cout << "Name: " << getName() << " - " << "Salary (Total): " << computeSalary() << std::endl;
}