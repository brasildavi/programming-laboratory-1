#include <iostream>

class Increase {
    private:
        int count;
        const int i;
    public:
        Increase(int c, int i = 1);
        void increase();
        void print() const;
};

Increase::Increase(int c, int i) : count(c), i(i) {}

void Increase::increase() {
    count += i;
}

void Increase::print() const {
    std::cout << "Count: " << count << std::endl;
    std::cout << "Increase: " << i << std::endl;
}

class UtilizaIncrease {
    public:
        Increase increase;
        UtilizaIncrease(Increase i) : increase(i) {}
};

int main() {
    int a = 21;
    Increase A(a);
    for (int i = 0; i < 10; i++) {
        A.increase();
    }
    A.print();
    return 0;
}