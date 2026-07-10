#include <iostream>

class Monkey {
    protected:
        int age;
    public:
        Monkey(int age = 0) : age(age) {}
        Monkey& operator=(const Monkey& other) {
            std::cout << "Operator = of Monkey called." << std::endl;
            if (this != &other) {
                age = other.age;
            }
            return *this;
        }
        void printMonkey() const {
            std::cout << "Age: " << age << std::endl;
        }
};

class SpiderMonkey : public Monkey {
    private:
        float height;
    public:
        SpiderMonkey(int age = 0, float height = 0) : Monkey(age), height(height) {}
        SpiderMonkey& operator=(const SpiderMonkey& other) {
            if (this != &other) {
                std::cout << "Operator = of SpiderMonkey called." << std::endl;
                // age = other.age;
                // height = other.height;
                Monkey::operator=(other);
                height = other.height;
            }
            return *this;
        }
        void printSpiderMonkey() const {
            std::cout << "Age: " << age << " years old.\n" << "Height: " << height << " m." << std::endl;
        }
};

int main() {
    SpiderMonkey Carvalho(10, 1.50);
    SpiderMonkey Neto(12, 1.45);
    std::cout << "Before: " << std::endl;
    Carvalho.printSpiderMonkey();
    Neto.printSpiderMonkey();
    std::cout << "Performing the assigment operation..." << std::endl;
    Carvalho = Neto;
    std::cout << "After: " << std::endl;
    Carvalho.printSpiderMonkey();
    Neto.printSpiderMonkey();
    return 0;
}
