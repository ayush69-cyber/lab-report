#include<iostream>
using namespace std;
class employee{
    private:
    int emp_no,basic;
    char name[30];
    float da,it,net;
    public:
    void getinfo(){
        cout<<"Enter Name , Employee_no and basic salary";
        cin>>name>>emp_no>>basic;

    }
    void compute(){
        da = 0.52*basic;
        it = 0.32*basic;
        net = basic - it;
    }
    int retno(employee e)
    {
        return (emp_no);
    }
    void showdetails()
    {
        cout<<"\nName = "<<name<<"\nEmployee_no = "<<emp_no<<"\nBasic = "<<basic<<"\nDA = "<<da<<"\nIT = "<<it<<"\nNet Salary = "<<net;
    }
};
int main()
{
    int n,emp_no,j,i;
    employee e[100];
    cout << "Enter the no of employees";
    cin>>n;
    for (i = 0;i<n;i++)
    {
        e[i].getinfo();
        e[i].compute();
    }
    cout <<"Enter the employee number:";
    cin>>emp_no;
    for(i = 0;i<n;i++)
    {
        j = e[i].retno(e[i]);
        if(j == emp_no){
            break;
        }
    }
    e[i].showdetails();
    return 0;
    
    

}