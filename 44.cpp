#include <iostream>
using namespace std;

class Date {
    int day, month, year;
public:
    Date() : day(1), month(1), year(2000) {
        cout << "Date Constructor called\n";
    }
    ~Date() {
        cout << "Date Destructor called\n";
    }
    void display() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
    Date get() {
        return *this;
    }
    void set() {
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }
};

class Time {
    int hour, minute, second;
public:
    Time() : hour(0), minute(0), second(0) {
        cout << "Time Constructor called\n";
    }
    ~Time() {
        cout << "Time Destructor called\n";
    }
    void display() {
        cout << "Time: " << hour << ":" << minute << ":" << second << endl;
    }
    Time get() {
        return *this;
    }
    void set() {
        cout << "Enter hour: ";
        cin >> hour;
        cout << "Enter minute: ";
        cin >> minute;
        cout << "Enter second: ";
        cin >> second;
    }
};

class DateAndTime : public Date, public Time {
public:
    DateAndTime() {
        cout << "DateAndTime Constructor called\n";
    }
    ~DateAndTime() {
        cout << "DateAndTime Destructor called\n";
    }
    void display() {
        Date::display();
        Time::display();
    }
};

int main() {
    
    DateAndTime Watch;

    
    cout << "\nInitial values:" << endl;
    Watch.display();

    
    cout << "\nSet new date and time values:" << endl;
    Watch.Date::set();
    Watch.Time::set();

    
    cout << "\nUpdated values:" << endl;
    Watch.display();

    return 0;
}
