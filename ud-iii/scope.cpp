#include <iostream>

void function_a();
void function_b();
void function_c();

int i = 1; // Global variable

int main() {
    int i = 2; // Local variable to main
    std::cout << i << std::endl; // 2
    {
        int i = 3;
        std::cout << i << std::endl; // 3
    }
    std::cout << i << std::endl; // 2
    std::cout << ::i << std::endl; // 1
    function_a();
    function_b();
    function_c();
    function_a();
    function_b();
    function_c();
    std::cout << i << std::endl;
    return 0;
}

void function_a() {
    std::cout << "Function A" << std::endl;
    int i = 4;
    std::cout << i << std::endl; // 4 --> 4
    i++;
    std::cout << i << std::endl; // 5 --> 5
    std::cout << "----------" << std::endl;
}

void function_b() {
    std::cout << "Function B" << std::endl;
    static int i = 5;
    std::cout << i << std::endl; // 5 --> 6
    i++;
    std::cout << i << std::endl; // 6 --> 7
    std::cout << "----------" << std::endl;
}

void function_c() {
    std::cout << "Function C" << std::endl;
    std::cout << i << std::endl; // 1 --> 10
    i *= 10;
    std::cout << i << std::endl; // 10 --> 100
    std::cout << "----------" << std::endl;
}
