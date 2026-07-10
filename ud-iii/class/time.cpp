#include <iostream>
#include <iomanip>

using namespace std;

class Time {
    public:
        Time();
        void setTime(int H, int M, int S);
        bool check(int H, int M, int S);
        void printMilitaryFormat();
        void printStandardFormat();
    private:
        int hour;    // Restrito entre 0 e 23
        int minute;  // Restrito entre 0 e 59
        int second;  // Restrito entre 0 e 59
};

int main() {
    Time t;
    t.setTime(7, 1, 5);
    t.printMilitaryFormat();
    t.printStandardFormat();
    return 0;
}

// Função

Time::Time() {
    hour = 0;
    minute = 0;
    second = 0;
}

bool Time::check(int h, int m, int s) {
    if (((0 <= h) && (h < 24)) && ((0 <= m) && (m < 60)) && ((0 <= s) && (s < 60)))
        return true;
    else
        return false;
}

void Time::setTime(int h, int m, int s) {
    if(check(h, m, s)) {
        hour = h;
        minute = m;
        second = s;
    }
    else {
        cout << "Error!" << endl;
    }
}

void Time::printMilitaryFormat() {
    cout << setfill('0') << setw(2) << hour << setfill('0') << setw(2) << minute << setfill('0') << setw(2) << second << endl;
}

void Time::printStandardFormat() {
    cout << setfill('0') << setw(2) << hour << ":" << setfill('0') << setw(2) << minute << ":" << setfill('0') << setw(2) << second << endl;
}
