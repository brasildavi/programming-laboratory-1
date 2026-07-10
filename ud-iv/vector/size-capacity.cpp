#include <iostream>
#include <vector>

int main() {
    std::vector<int> v(10); // SIZE: 0 | CAPACITY: 0
    for (int i = 0; i < 12; i++) {
        v.push_back(10 * i);
        std::cout << "Tamanho: " << v.size() << " - " << "Capacidade: " << v.capacity() << std::endl;
    }
    for (const auto& p : v) {
        std::cout << p << std::endl;
    }
    return 0;
}