#include <iostream>

void counter() {
    static int count = 0;
    count++;
    std::cout << "Counter: " << count << std::endl;
}

class Object {
    public:
        static int objectCounter;
        Object() {
            objectCounter++;
        }
};

int Object::objectCounter = 0;

int main() {
    counter();
    counter();
    counter();
    Object o1;
    Object o2;
    std::cout << Object::objectCounter << std::endl;
    return 0;
}