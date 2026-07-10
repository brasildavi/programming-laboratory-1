#include <iostream>
#include <string>

using namespace std;

class Father {
    private:
        int p;
    public:
        Father(int q = 0);
        int sum(int q);
};

class Son : public Father {
    private:
        int r;
    public:
        Son(int s = 0);
        int multiplication(int s);
};

int main() {
    Father a(5);
    Son b(3);
    cout << a.sum(3) << endl;
    cout << b.sum(4) << endl;
    return 0;
}
Father::Father(int q) {
    p = q;
}

int Father::sum(int q) {
    q = q + p;
    return q;
}

Son::Son(int s) : Father(s) {}

int Son::multiplication(int s) {
    s = s * r;
    return s;
}
