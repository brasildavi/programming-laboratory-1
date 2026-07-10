#include <iostream>

int main() {
    int *ptr = NULL;
    ptr = new int(10);
    std::cout << *ptr << std::endl;
    delete ptr;
    *ptr = 5;
    std::cout << *ptr << std::endl;
    return 0;
}