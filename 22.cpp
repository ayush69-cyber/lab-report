#include<iostream>
using namespace std;

class rupees;

float conversionrate = 101.36;

class dollar {
    float doll;
public:
    dollar() : doll(0) {}
    void getdollar() {
        cout << "Enter the amount in dollar: ";
        cin >> doll;
    }
    int operator<(rupees&);
    int operator>(rupees&);
    int operator==(rupees&);
};

class rupees {
    float rs;
public:
    rupees() : rs(0) {}
    void getrs() {
        cout << "Enter the amount in Rupees: ";
        cin >> rs;
    }
    friend int dollar::operator<(rupees&);
    friend int dollar::operator>(rupees&);
    friend int dollar::operator==(rupees&);
};

int dollar::operator<(rupees& r) {
    return (doll * conversionrate < r.rs);
}

int dollar::operator>(rupees& r) {
    return (doll * conversionrate > r.rs);
}

int dollar::operator==(rupees& r) {
    return (doll * conversionrate == r.rs);
}

int main() {
    dollar d;
    rupees r;
    d.getdollar();
    r.getrs();
    if (d < r) {
        cout << "Amount in rupees is greater than dollar";
    } else if (d > r) {
        cout << "Amount in dollar is greater than rupees";
    } else if (d == r) {
        cout << "Amount in dollar is equal to rupees";
    }
    return 0;
}
