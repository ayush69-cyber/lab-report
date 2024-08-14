#include<iostream>
using namespace std;
class student{
    int rn;
    char name[20];
    public:
    student(){
        rn = 0;
        name[0] = '\0';
    }
    void getinfo()
    {
        cout<<"Enter Name and Roll.No :"<<endl;
        cin>>name>>rn;
    }
    void showinfo()
    {
        cout<<"Name : "<<name<<"\tRoll.NO: "<<rn<<endl;
    }
};
class internalexam:protected student{
    int m[7];
    public:internalexam()
    {
        m[0] = 0;
    }
    void getinfo()
    {
        student::getinfo();
        cout<<"Enter Your marks in 7 subject in Internal Exam:"<<endl;
        for(int i = 0;i<7;i++)
        {
            cin>>m[i];
        }
    }
    void showinfo()
    {
        student::showinfo();
    }
    int retmarks(int i)
    {
        return m[i];
    }
    
};
class finalexam:protected student{
    int m[7];
    public:
    finalexam(){
        m[0] = 0;
    }
    void getinfo()
    {
        cout<<"Enter your marks in 7 subjects in Final Exam:"<<endl;
        for(int i = 0;i<7;i++)
        {
            cin>>m[i];
        }
    }
    int retmarks(int i)
    {
        return m[i];
    }
};
class total:protected internalexam,protected finalexam{
    float avgmark;
    public:
    total()
    {
        avgmark = 0;
    }
    void calcavg()
    {
        int tot = 0;
        for(int i = 0;i<7;i++)
        {
         tot+=internalexam::retmarks(i)+finalexam::retmarks(i);   
        }
        avgmark = tot/7;
    }
    void getinfo()
    {
        internalexam::getinfo();
        finalexam::getinfo();
        
    }
    void showinfo()
    {
        calcavg();
        internalexam::showinfo();
       cout<<"Average Marks is :"<<endl<<avgmark; 
    }
};
int main(){
    total t1;
    t1.getinfo();
    t1.showinfo();
    return 0;
}
