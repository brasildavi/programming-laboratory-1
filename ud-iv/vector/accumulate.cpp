#include <iostream>
#include <vector>
// #include <algorithm>
#include <numeric>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    int s = std::accumulate(v.begin(), v.end(), 0);
    std::cout << s << std::endl;
    return 0;
}

/*
ACCUMULATE -- SOMA TODOS OS ELEMENTOS
MAX_ELEMENT -- ITERADOR PARA O MAIOR ELEMENTO
MIN_ELEMENT -- ITERADOR PARA O MENOR ELEMENTO
*/