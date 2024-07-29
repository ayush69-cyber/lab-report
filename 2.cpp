#include<iostream>
using namespace std;
class minimax
{
    private:
        int num;
    public:
        
        void getinput()
        {
        cout<<"Enter the number";
        cin>>num;
        }
        void compare(minimax n1,minimax n2,minimax n3)
        {
        (n1.num>n2.num&&n1.num>n3.num)?(cout<<"Largest number is "<<n1.num):((n2.num>n1.num&&n2.num>n3.num)?cout<<"Largest number is "<<n2.num:cout<<"largest number is "<<n3.num);
     }
};
int main()
{
    minimax m1,m2,m3,m4;
    m1.getinput();
    m2.getinput();
    m3.getinput();
    m4.compare(m1,m2,m3);
    return 0;
}