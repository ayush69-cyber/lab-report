#include<iostream>
using namespace std;
class vechile{
  static int count;
  int pin,pout;
  float chrg = 2.0;
  public:
  vechile()
  {
      chrg = 2;
  }
  int enteredtime()
  {
      cout<<"Enter the entered hour";
      cin>>pin;
      return pin;
  }
  int exitedtime()
  {
      cout<<"Enter the exited hour";
      cin>>pout;
      return pout;
  }
  void charge(float rate)
  {
    chrg = chrg + rate*(pout-pin);
    cout<<"Total parking cost is ";
    cout<<chrg<<" dollars"<<endl;
  }
  void charge24(float rate)
  {
      chrg = 8+rate*(pout-pin-24);
      cout<<"Total parking cost is ";
      cout<<chrg<<" dollars"<<endl;
  }
  void operator++()
  {
      count++;
  }
  void operator--()
  {
      --count;
  }
  static void funcount();
};
int vechile::count = 0;
void vechile::funcount()
{
    cout<<"No of parked vechile is "<<count;
}
int main()
{
    vechile v;
    int pin,pout;
    pin = v.enteredtime();
    ++v;
    pout = v.exitedtime();
    --v;
    if(pout-pin>3&&pout-pin<24)
    {
        v.charge(0.50);
    }
    else if(pout-pin>=24)
    {
       v.charge24(0.50); 
    }
    vechile::funcount();
    return 0;
}
