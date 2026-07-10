#include <iostream>
#include <string>
#include <cstdlib>

using std::string;
using std::cout;
using std::endl;
using std::nothrow;

class Employee {
    private:
        string name;
        double salaryBase;
    public:
        Employee(const string& name = "", double salaryBase = 0);
        string getName() const;
        void setName(const string& name);
        double getSalaryBase() const;
        void setSalaryBase(double salaryBase);
        void visualize() const;
};

class Manager : public Employee {
    private:
        double bonus;
    public:
        Manager(const string& name = "", double salaryBase = 0, double bonus = 0) : Employee(name, salaryBase), bonus(bonus) {}
        double computeSalary() const;
        void visualize() const;
};


Employee::Employee(const string& name, double salaryBase) {
    (*this).name = name;
    (*this).salaryBase = salaryBase;
}

string Employee::getName() const {
    return name;
}

void Employee::setName(const string& name) {
    (*this).name = name;
}

double Employee::getSalaryBase() const{
    return salaryBase;
}

void Employee::setSalaryBase(double salaryBase) {
    (*this).salaryBase = salaryBase;
}

void Employee::visualize() const{
    cout << "Name: " << name << "\n" << "Salary: R$ " << salaryBase << endl;

}

double Manager::computeSalary() const{
    return bonus + getSalaryBase();
}

void Manager::visualize() const{
    cout << "Name: " << getName() << "\n" << "Salary (Base): R$ " << getSalaryBase() << "\n" <<  "Salary (Total): R$ " << computeSalary() << endl;
}

int main() {
    Employee *f = new (nothrow) Employee("Oscar Martins", 15000);
    if (f == NULL) {
        cout << "Memory allocation error!" << endl;
        exit(1);
    }
    Manager *g = new (nothrow) Manager("Isabel", 25000, 15000);
    if (g == NULL) {
        cout << "Memory allocation error!" << endl;
        exit(1);
    }
    (*f).visualize();
    (*g).visualize();
    (*g).Employee::visualize();
    delete f;
    delete g;
    return 0;
}