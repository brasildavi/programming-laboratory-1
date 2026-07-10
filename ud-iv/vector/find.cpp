#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {10, 20, 30, 42, 50};
    auto i = find(v.begin(), v.end(), 20);
    auto index = std::distance(v.begin(), i);
    if (i != v.end()) {
        std::cout << "Encontramos " << *i << " no índice " << index << "." << std::endl;
    } else {
        std::cout << "Não encontrado! 20 não está presente no contêiner." << std::endl;
    }
    return 0;
}