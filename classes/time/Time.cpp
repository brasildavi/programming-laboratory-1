#include "time.h"
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setfill;
using std::setw;

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
