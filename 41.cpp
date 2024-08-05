#include<iostream>
using namespace std;
class person{
  char name[30];
  int age,id;
  public:
  person()
  {
      name[0] = '\0';
      age = 0;
      id = 0;
  }
  void getinfo(){
      cout<<"Enter Your Name,Age and Id"<<endl;
      cin>>name>>age>>id;
  }
  void showinfo()
  {
      cout<<"Name = "<<name<<"\n"<<"Age = "<<age<<"\n"<<"Id = "<<id<<endl;
  }
};
class employee:protected person
{
  char designation[30];
  float basalary,totovrtime,hrate;
  public:
  employee()
  {
      designation[0] = '\0';
      basalary = 0;
      totovrtime = 0;
      hrate = 0;
  }
  void getinfo()
  {
      person::getinfo();
      cout<<"Enter your designation,Basic salary,Total Overtime done in a month,hourly rate"<<endl;
      cin>>designation>>basalary>>totovrtime>>hrate;
  }
  void showinfo()
  {
      person::showinfo();
      cout<<"Designation = "<<designation<<"\nBasic Salary = "<<basalary<<"\nTotal Overtime =  "<<totovrtime<<"\nHourly Rate = "<<hrate<<endl;
  }
  float retbasalary()
  {
      return basalary;
  }
  float rettotovrtime()
  {
      return totovrtime;
  }
  float rethrate()
  {
      return hrate;
  }
};
class computedsal:protected employee
{
    float totalsal;
    public:
    computedsal():totalsal(0){}
    void getinfo()
    {
        employee::getinfo();
    }
    
    void showinfo()
    {
        employee::showinfo();
        cout<<"Total Salary = "<<totalsal;
    }
    void computesalary()
    {
        totalsal = employee::retbasalary()+employee::rettotovrtime()*employee::rethrate();
    }
};
int main()
{
    computedsal c;
    c.getinfo();
    c.computesalary();
    c.showinfo();
    return 0;
}