#include <iostream>

using namespace std;

class Calculator {
    private:
        double a;
    public:
        Calculator(double num) {
            a = num;
        }
        double sum(double b) {
            double s;
            s = a + b;
            return s;
        }
};

int main() {
    Calculator r = 3;
    double s;
    s = r.sum(4);
    cout << "The result is equal to " << s << "." << endl;
    return 0;
}
