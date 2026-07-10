#include <iostream>
#include <stdexcept>

int main() {
    try {
        int age = 10;
        if (age < 18) {
            throw std::runtime_error("Access denied - You must be at least 18 years old.");
        } else {
            std::cout << "Access granted" << std::endl;
        }
    }
    catch (const std::runtime_error& e) {
        std::cerr << "Caught error: " << e.what() << std::endl;
    }
    return 0;
}