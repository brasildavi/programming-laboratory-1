#include "time.h"

int main() {
    Time t;
    t.setTime(7, 1, 5);
    t.printMilitaryFormat();
    t.printStandardFormat();
    return 0;
}
