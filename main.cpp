#include<iostream>
using namespace std;
class DISTANCE
{
    private:
        int feet,inches;
    public:
        void getinput()
        {
            cout<<"Enter the distance in feet and inches";
            cin>>feet>>inches;
        } 
        void showinput()
        {
            cout<<"Distance = "<<feet<<" feet "<< inches<<" inches"<<endl;
        }
        void add(DISTANCE d1,DISTANCE d2){
            inches = (d1.inches + d2.inches);

            feet = (d1.feet + d2.feet) + (inches/12);
            inches %= 12;
            cout << "Sum of distances = "<<feet<<" feet "<< inches<<" inches"<<endl;
            
        }

};
int main()
{
    DISTANCE d1,d2,sum;
    d1.getinput();
    d1.showinput();
    d2.getinput();
    d2.showinput();
    sum.add(d1,d2);
    return 0;
}