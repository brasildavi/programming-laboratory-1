#include <iostream>

using std::cout;
using std::endl;

int mdc(int x, int y);

class RacionalNumber {
    private:
        int n, d;
    public:
        RacionalNumber(int n, int d);
        void print() const;
        RacionalNumber operator+(const RacionalNumber& ratio) const;
        RacionalNumber operator/(const RacionalNumber& ratio) const;
        RacionalNumber& operator++();
        RacionalNumber operator++(int i);
        operator float();
        friend RacionalNumber operator+ (int i, const RacionalNumber &q);
};

RacionalNumber::operator float() {
    return n / (float) d;
}

RacionalNumber RacionalNumber::operator++(int i) {
    RacionalNumber temp(*this);
    (*this).n = (*this).n + (*this).d;
    return temp;
}

RacionalNumber& RacionalNumber::operator++() {
    (*this).n = (*this).n + (*this).d;
    return *this;
}

RacionalNumber RacionalNumber::operator/(const RacionalNumber &ratio) const {
    return RacionalNumber((*this).n * ratio.d, (*this).d * ratio.n);
}

RacionalNumber RacionalNumber::operator+(const RacionalNumber &ratio) const {
    return RacionalNumber(((*this).n * ratio.d + (*this).d * ratio.n), (*this).d * ratio.d);
}

RacionalNumber::RacionalNumber(int n, int d) {
    // Verificação de denominador negativo
    if (d == 0) {
        throw "Denominador nulo!";
    }

    // Simplificação de numerador e denominador via MDC
    (*this).n = n/mdc(n,d);
    (*this).d = d/mdc(n,d);

    // Verificação de denominador negativo
    if ((*this).d < 0) {
        (*this).n = -(*this).n;
        (*this).d = -(*this).d;
    }
}

void RacionalNumber::print() const {
    cout << n << "/" << d << endl;
}

int mdc(int x, int y) {
    if (y == 0) {
        return x;
    }
    else {
        return mdc(y, x % y);
    }
}

RacionalNumber operator+(int i, const RacionalNumber& q) {
    return RacionalNumber(q.n + i * q.d, q.d);
}


int main() {
    // RacionalNumber n1(4,10);
    // RacionalNumber n2(8,-64);
    try {
        RacionalNumber n3(1,5);
        RacionalNumber n4(1,6);
        // RacionalNumber n1(4,0);
        // RacionalNumber n3(9,0);
        n3.print();
        n4.print();
        // n3.print();
        (n3+n4).print();
        (n3/n4).print();
        (n3++).print();
        n3.print();
        (++n4).print();
        n4.print();
        (2+n4).print();
        cout << float (n4) << endl;
        cout << (float) n4 << endl;
    }
    catch (const char *erro) {
        cout << "Erro: " << erro << endl;
    }
    return 0;
}
