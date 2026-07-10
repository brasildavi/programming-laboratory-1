#include <iostream>
#include <cmath>

using namespace std;

class Point {
    private:
        float x;
        float y;
        float z;
    public:
        Point(float x_in = 0, float y_in = 0, float z_in = 0);
        // Point(const Point &p);
        ~Point();
        float distance(const Point &p) const;
};

int main() {
    Point p1(1, 2, 3);
    Point p2(4, 5, 6);
    float distance;
    distance = p1.distance(p2);
    cout << distance << endl;
    return 0;
}

Point::Point(float x_in, float y_in, float z_in) { // Em C++, os valores padrão devem aparecer uma só vez. Portanto, na definição fora da classe, não deve-se colocar "= 0"
    x = x_in;
    y = y_in;
    z = z_in;
    cout << "Invocação do contrutor!" << endl;
}

// Point::Point(const Point &p) {
//     x = p.x;
//     y = p.y;
//     z = p.z;
//     cout << "Invocação do contrutor por cópia!" << endl;
// }

Point::~Point() {
    cout << "Invocação do destrutor!" << endl;
}

float Point::distance(const Point &p) const {
    float d;
    d = sqrt(pow(x - p.x, 2) + pow(y - p.y, 2) + pow(z - p.z, 2));
    return d;
}
