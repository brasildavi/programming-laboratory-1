#include <iostream>

extern int total;
extern void displayTotal();

int main() {
    std::cout << "Total: " << total << std::endl;
    total = 200;
    displayTotal();
    return 0;
}
