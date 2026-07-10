#include <iostream>
#include <vector>

class Point {
    private:
        double x, y;
    public:
        Point(double x, double y) {
            (*this).x = x;
            (*this).y = y;
        }
};

int main() {
    std::vector <Point *> v(2);
    v[0] = new Point(2, 3);
    v[1] = new Point(3, 4);
    // v[2] = new Point(4, 5);
    v.resize(3);
    v[2] = new Point(4, 5);
    delete v[2], v[1], v[0];
    return 0;
}