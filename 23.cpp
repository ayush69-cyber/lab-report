#include<iostream>
#include<math.h>
using namespace std;
class complex{
    float real,img;
    
    public:
    complex(){
        real = 0;
        img = 0;
    }
    void getinfo()
    {
        cout<<"Enter the real part = ";
        cin>>real;
        cout<<"Enter the imaginary part = ";
        cin>>img;
    }
    void showinfo(){
        cout<<"Complex Number = "<<real<<" + "<<img<<"i"<<endl;
    }
    complex operator+(complex&);
    complex operator-(complex&);
    complex operator*(complex&);
    complex operator/(complex&);
};
complex complex:: operator+(complex& c)
{
    complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
}
complex complex:: operator-(complex& c)
{
    complex temp;
    temp.real = real - c.real;
    temp.img = img - c.img;
    return temp;
}
complex complex:: operator*(complex& c)
{
    complex temp;
    temp.real = real*c.real;
    temp.img = img*c.img;
    return temp;
}
complex complex:: operator/(complex& c)
{
    complex temp;
    temp.real = (real*c.real+(img*c.img))/(pow(c.real,2)+pow(c.img,2));
    temp.img = (c.real*img-(real*c.img))/(pow(c.real,2)+pow(c.img,2));
    return temp;
}
int main()
{
    complex c1,c2,c3;
    c1.getinfo();
    c2.getinfo();
    c3 = c1+c2;
    c3.showinfo();
    c3 = c1-c2;
    c3.showinfo();
    c3 = c1*c2;
    c3.showinfo();
    c3 = c1/c2;
    c3.showinfo();

    
    return 0;
}