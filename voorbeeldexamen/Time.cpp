#include "Time.h"


Time::Time(long s): seconden(s) {
    hms = new int[3];
    berekenHMS();
}

Time::~Time() {
    delete[] hms;
}

string Time::toString() const {
    return to_string(hms[0]) + ": " + to_string(hms[1]) + ": " + to_string(hms[2]);
}

void Time::berekenHMS() {
    int uren = seconden/3600;
    int minuten = seconden/60;
    int second = seconden - (minuten * 60) - (uren * 3600);

    hms[0] = uren;
    hms[1] = minuten;
    hms[2] = second;
}


void Time::add(long s) {
    seconden += s;
    berekenHMS();
}
