#include <iostream>
#include <vector>
#include <algorithm>

void print(std::vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // UNIQUE -- MOVE TODOS OS ELEMENTOS REPETIDOS QUE ESTÃO LADO A LADO
    std::vector<int> v = {1, 1, 2, 3, 3, 3, 4, 5, 1, 1, 1, 1, 1, 5, 6, 7, 8, 8, 4, 3};
    std::sort(v.begin(), v.end());
    print(v);
    auto u = std::unique(v.begin(), v.end());
    print(v);
    v.erase(u, v.end());
    print(v);
    return 0;
}