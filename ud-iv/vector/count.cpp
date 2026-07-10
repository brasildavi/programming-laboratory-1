#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 3, 2, 4, 2, 5};
    int r = count(v.begin(), v.end(), 2);
    std::cout << r << std::endl;
    return 0;
}