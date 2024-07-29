#include<iostream>
#include<cmath>
using namespace std;
class cartesian
{
    float xcor,ycor;
    public:
    cartesian()
    {
        xcor= 0;
        ycor= 0;
    }
    cartesian(float x,float y)
    {
        xcor = x;
        ycor = y;
    }
    void showresult()
    {
        cout<<"Cartesin Coordinate is("<<xcor<<","<<ycor<<")\n";
    }
    float retx()
    {
        return xcor;
    }
    float rety()
    {
        return ycor;
    }
};
class polar
{
    double r,theta;
    public:
    polar()
    {
        r = 0;
        theta = 0;
    }
    polar(cartesian c)
    {
        double x,y;
        x= c.retx();
        y = c.rety();
        r = sqrt(pow(x,2)+pow(y,2));
        theta = atan2(y,x);
    }
    void showresult()
    {
        cout<<"Polar coordinate is ("<<r<<","<<theta<<")";
    }
};
int main()
{
    cartesian c(12,13);
    polar p =  c;
    c.showresult();
    p.showresult();
    return 0;
}