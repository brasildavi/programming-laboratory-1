#include <iostream>
#include <vector>

int main() {
    std::vector <int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    std::cout << "Tamanho: " << v.size() << std::endl;
    std::cout << "Capacidade: " << v.capacity() << std::endl;
    return 0;
}
