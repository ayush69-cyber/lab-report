#include<iostream>
using namespace std;
class pharmacy
{
    private:
    int order,store;
    public:
    
    void getinput(){
        cout << "Enter the Store Quantity:";
        cin>>store;
        cout<<"Enter the order quantity";
        cin>>order;
        
    }
    void result()
    {
        if(order > store)
            cout<<"Not enough quantity";
        else if(order>16&&store<=40)
            cout<<"You cannot order more than 16";
        else
            cout<<"Your order is placed";    
    }
};
int main()
{
    pharmacy p1;
    p1.getinput();
    p1.result();
    return 0;
}