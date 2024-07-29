#include<iostream>
using namespace std;

class Time {
    int hr, min, sec;

public:
    Time(): hr(0), min(0), sec(0) {}

    // Friend function to overload >> operator
    friend istream& operator>>(istream &input, Time &t) {
        cout << "Enter time in hh mm ss format: ";
        input >> t.hr >> t.min >> t.sec;
        return input;
    }

    // Friend function to overload << operator
    friend ostream& operator<<(ostream &output, const Time &t) {
        output << "Time is ";
        if (t.hr < 10) output << "0";
        output << t.hr << ":";
        if (t.min < 10) output << "0";
        output << t.min << ":";
        if (t.sec < 10) output << "0";
        output << t.sec;
        return output;
    }
};

int main() {
    Time t1;
    cin >> t1;
    cout << t1;
    return 0;
}

