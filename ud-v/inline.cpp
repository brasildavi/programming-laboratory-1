#include <iostream>
#define ABS_D(I) ((I) >= 0 ? (I) : -(I))

inline int ABS_I(int i) {
    return i >= 0 ? i : -i;
}

int f(int &y) {
    y++;
    return y;
}

int main() {
    int answer, x = 0;
    // answer = ABS_D(++x);
    // std::cout << answer << std::endl;
    // answer = ABS_D(f(x));
    // std::cout << answer << std::endl;
    // answer = ABS_I(++x);
    // std::cout << answer << std::endl;
    // answer = ABS_I(f(x));
    // std::cout << answer << std::endl;
    return 0;
}
