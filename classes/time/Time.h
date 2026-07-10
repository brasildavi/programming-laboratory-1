#ifndef TIME_H
#define TIME_H

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

#endif