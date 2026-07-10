#include <iostream>

class Vector2D {
    private:
        float x, y;
    public:
        Vector2D(float x = 0, float y = 0) : x(x), y(y) {}
        // SOBRECARGA COMO FUNÇÃO AMIGA
        friend Vector2D operator+(const Vector2D& v1, const Vector2D& v2) {
            return Vector2D(v1.x + v2.x, v1.y + v2.y);
        }
        void print() const {
            std::cout << "(" << x << ", " << y << ")" << std::endl;
        }
};

int main() {
    Vector2D v(2, 3);
    Vector2D u(1.5, 4);
    Vector2D w = v + u; // UTILIZAÇÃO DO OPERADOR SOBRECARREGADO
    w.print();
    return 0;
}