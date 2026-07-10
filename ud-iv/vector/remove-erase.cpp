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
    std::vector<int> v = {2, 1, 2, 3, 2, 5, 2, 7, 2, 9};
    print(v);
    auto i = remove(v.begin(), v.end(), 2);
    print(v);
    v.erase(i, v.end());
    print(v);
    return 0;
}