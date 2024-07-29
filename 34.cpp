#include<iostream>
using namespace std;
class time24{
    int hr,min,sec;
    public:
    time24()
    {
        hr = 0;
        min = 0;
        sec = 0;
    }
    time24(int h,int m,int s)
    {
        hr = h;
        min = m;
        sec = s;
    }
    void showinfo()
    {
        cout<<"Time in 24 hr format is:"<<endl;
        if(hr<10)cout<<"0";
        cout<<hr<<":";
        if(min<10)cout<<"0";
        cout<<min<<":";
        if(sec<10)cout<<"0";
        cout<<sec<<endl;
    }
    int rethr()
    {
        return hr;
    }
    int retmin()
    {
        return min;
    }
    int retsec()
    {
        return sec;
    }
};
class time12{
    int hr,min,sec;
    public:
    time12():hr(0),min(0),sec(0){}
    time12(time24 t)
    {
        min = t.retmin();
        sec = t.retsec();
        if(t.rethr()>12)
        {
            hr = t.rethr() - 12;
        }
        else hr = t.rethr();
    }
    void showinfo()
    {
       cout<<"Time in 12 hr format is:"<<endl;
        if(hr<10)cout<<"0";
        cout<<hr<<":";
        if(min<10)cout<<"0";
        cout<<min<<":";
        if(sec<10)cout<<"0";
        cout<<sec; 
    }
    
};
int main()
{
    time24 t24(23,59,58);
    time12 t12;
    t12 = t24;
    t24.showinfo();
    t12.showinfo();
    return 0;
}