#include <iostream>

namespace Enterprise {
    void display() {
        std::cout << "SpaceX" << std::endl;
    }
}

namespace Father {
    namespace Son {
        int number = 1;
    }
}

using namespace Enterprise;

int main() {
    display();
    if (Father::Son::number == 1) {
        std::cout << "Correct, keep!" << std::endl;
    } else {
        std::cout << "Wrong!" << std::endl;
    }
    return 0;
}
