#include<iostream>
#include<cstring>
using namespace std;

class time12 {
    int hr, min, sec;
    char period[3]; 

public:
    time12() : hr(0), min(0), sec(0) {
        strcpy(period, "AM");
    }

    time12(int h, int m, int s, const char* p) : hr(h), min(m), sec(s) {
        strncpy(period, p, 2);
        period[2] = '\0'; 
    }

    void showinfo() const {
        cout << "Time in 12 hr format is:" << endl;
        if (hr < 10) cout << "0";
        cout << hr << ":";
        if (min < 10) cout << "0";
        cout << min << ":";
        if (sec < 10) cout << "0";
        cout << sec << " " << period << endl;
    }

    int rethr() const {
        return hr;
    }

    int retmin() const {
        return min;
    }

    int retsec() const {
        return sec;
    }

    const char* retper() const {
        return period;
    }
};

class time24 {
    int hr, min, sec;

public:
    time24() : hr(0), min(0), sec(0) {}

    time24(const time12& t) {
        min = t.retmin();
        sec = t.retsec();
        hr = t.rethr();
        if (strcmp(t.retper(), "PM") == 0 && hr != 12) {
            hr += 12;
        } else if (strcmp(t.retper(), "AM") == 0 && hr == 12) {
            hr = 0;
        }
    }

    void showinfo() const {
        cout << "Time in 24 hr format is:" << endl;
        if (hr < 10) cout << "0";
        cout << hr << ":";
        if (min < 10) cout << "0";
        cout << min << ":";
        if (sec < 10) cout << "0";
        cout << sec << endl;
    }
};

int main() {
    time12 t12(11, 59, 58, "PM");
    time24 t24(t12);
    t12.showinfo();
    t24.showinfo();
    return 0;
}
