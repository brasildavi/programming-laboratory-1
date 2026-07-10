#include <iostream>

class Clock {
    protected:
        int hour, minute, second;
        bool isPM; // 0 == AM | 1 == PM
    public:
        Clock(int h, int m, int s, bool isPM);
        void setClock(int h, int m, int s, bool isPM);
        void getClock(int &h, int &m, int &s, bool &isPM);
        void advance();
};

class Calendar {
    protected:
        int day, month, year;
    public:
        Calendar(int d, int m, int y);
        void setCalendar(int d, int m, int y);
        void getCalendar(int &d, int &m, int &y);
        void advance();
};

class ClockCalendar : public Clock, public Calendar {
    public:
        ClockCalendar(int d, int m, int y, int h, int min, int s, int isPM);
        void advance();
};

int main() {

    return 0;
}

ClockCalendar::ClockCalendar(int d, int m, int y, int h, int min, int s, int isPM) : Clock(h, min, s, isPM), Calendar(d, m, y) {}

void ClockCalendar::advance() {
    bool beforeIsPM = isPM;
    Clock::advance();
    if (beforeIsPM && !isPM) {
        Calendar::advance();
    }
}
