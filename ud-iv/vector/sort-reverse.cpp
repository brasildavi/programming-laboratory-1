#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {5, 2, 9, 1, 5, 6};
    std::sort(v.begin(), v.end());
    for (const auto& p : v) {
        std::cout << p << " ";
    }
    std::cout << std::endl;
    reverse(v.begin(), v.end());
    for (const auto& p : v) {
        std::cout << p << " ";
    }
    // std::sort(v.begin(), v.end(), std::greater<int>());
    // for (const auto& p : v) {
    //     std::cout << p << " ";
    // }
    // std::cout << std::endl;
    return 0;
}