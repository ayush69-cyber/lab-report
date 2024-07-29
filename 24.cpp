#include<iostream>
using namespace std;
class Time
{
  int hours,minute,seconds;
  public:
  Time()
  {
      hours = 0;
      minute = 0;
      seconds = 0;
  }
  Time(int hr,int min,int sec)
  {
      hours = hr;
      minute = min;
      seconds = sec;
  }
  void getinfo()
  {
      cout<<"Enter your Time in hh:mm:ss format";
      cin>>hours>>minute>>seconds;
  }
  void showinfo()
  {
     if(hours<10)cout<<"Time is 0";
     cout<<hours<<":";
     if(minute<10)cout<<"0";
     cout<<minute<<":";
     if(seconds<10)cout<<"0";
     cout<<seconds<<endl;
  }
  Time operator+(Time&);
  int operator>(Time&);
};
Time Time::operator+(Time& t)
{
    Time temp;
    temp.seconds = seconds + t.seconds;
    temp.minute = minute + t.minute + (temp.seconds / 60);
    temp.seconds %= 60;
    temp.hours = hours + t.hours + (temp.minute / 60);
    temp.minute %= 60;
    return temp;
}
int Time::operator>(Time& t)
{
     if (hours > t.hours) return 1;
    if (hours == t.hours && minute > t.minute) return 1;
    if (hours == t.hours && minute == t.minute && seconds > t.seconds) return 1;
    return 0;
}
int main()
{
    Time t1,t2(23,34,8),t3;
    t1.getinfo();
    t1.showinfo();
    t2.showinfo();
    t3 = t1+t2;
    cout<<"Sum of ";
    t3.showinfo();
    if(t1>t2)cout<<"Time 1 is greater than Time 2";
    else cout<<"Time 1 is not greater than Time 2";
    return 0;
}