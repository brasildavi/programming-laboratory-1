#include <iostream>
#include <iomanip>

using namespace std;

// Classes

class Date {
    private:
        int day, month, year;
    public:
        Date(int d = 1, int m = 1, int a = 1);
        void restart();
        void advance(int d, int m, int a);
        void print();
        bool normalize();
        int monthDays(int m, int a);
};

int main() {
    Date birthday(21, 2, 2006);
    birthday.print();
    birthday.restart();
    birthday.print();
    birthday.advance(0, 9, 2014);
    birthday.print();
    return 0;
}

// Implementações

Date::Date(int d, int m, int a) {
    day = d;
    month = m;
    year = a;
}

void Date::restart() {
    day = 1;
    month = 1;
    year = 1;
}

void Date::advance(int d, int m, int a) {
    day = day + d;
    if (day > monthDays(m, a)) {
        day = 1;
        month++;
    }
    month = month + m;
    if (month > 12) {
        month = 1;
        year++;
    }
    year = year + a;
}

void Date::print() {
    cout << setfill('0') << setw(2) << day << "/" << setfill('0') << setw(2) << month << "/" << setfill('0') << setw(4) << year << endl;
}

bool Date::normalize() {
    if ((year >= 1) && (1 <= month && month <= 12) && (1 <= day && day <= monthDays(month, year)))
        return 1;
    else
        return 0;
}

int Date::monthDays(int m, int a) {
    switch (m) {
        case 1:
            return 31;
        case 2:
            if ((a % 400 == 0) || (a % 4 == 0 && a % 100 != 0))
                return 29;
            else
                return 28;
        case 3:
            return 31;
        case 4:
            return 30;
        case 5:
            return 31;
        case 6:
            return 30;
        case 7:
            return 31;
        case 8:
            return 31;
        case 9:
            return 30;
        case 10:
            return 31;
        case 11:
            return 30;
        case 12:
            return 31;
        default:
            return 0;
    }
}