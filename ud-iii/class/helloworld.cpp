#include <iostream>

class Hello {
    public:
        void first();
    private:
    protected:
};

int main() {
    Hello example;
    example.first();
    return 0;
}

void Hello::first() {
    std::cout << "Hello, World!" << std::endl;
}