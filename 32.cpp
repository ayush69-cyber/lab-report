#include<iostream>
#include<cmath>
using namespace std;
class polar{
  float radius,theta;
  public:
  polar()
  {
      radius = 0;
      theta = 0;
  }
  polar(float r,float th)
  {
      radius = r;
      theta = th;
  }
  void display()
  {
      cout<<"Polar Coordinates = ("<<radius<<","<<theta<<")"<<endl;
  }
  float retrad()
  {
      return radius;
  }
  float retthe()
  {
      return theta;
  }
};
class cartesian
{
  float x,y;
  public:
  cartesian():x(0),y(0){}
  cartesian(float a,float b):x(a),y(b){}
  cartesian(polar p)
  {
      x = p.retrad()*cos(p.retthe());
      y = p.retrad()*sin(p.retthe());
  }
  void display()
  {
      cout<<"Cartesian Co-oridnate = ("<<x<<", "<<y<<")"<<endl;
  }
};
int main()
{
    polar p(sqrt(2),3.14/4);
    cartesian c;
    c = p;
    p.display();
    c.display();
    return 0;
}