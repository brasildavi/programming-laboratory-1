#ifndef RACIONALNUMBER_H
#define RACIONALNUMBER_H

class RacionalNumber {
    private:
        int p;
        int q;
    public:
        RacionalNumber(int p, int q);
        void print() const;
        RacionalNumber operator+(RacionalNumber x);
        RacionalNumber operator/(RacionalNumber x);
        RacionalNumber& operator++();
        RacionalNumber operator++(int i);
        operator float();
};

#endif