#include<iostream>
#include<cstring>
using namespace std;
class employee{
  static int count1,count2;
  char name[30],designation[30];
  int id;
  public:
  void getinfo()
  {
      cout<<"Enter the name,id and designation";
      cin>>name>>id>>designation;
      for(int i = 0;i<strlen(designation);i++)
      {
          designation[i] = toupper(designation[i]);
      }
      if(strcmp(designation,"ENGINEER")==0)
      count1++;
      else
      count2++;
  }
  static void display(){
      cout<<"The total number of engineers are "<<count1;
      cout<<"\nThe total number of managers are "<<count2;
      cout<<"\nThe total employees are "<<count1+count2;
      
  }
  
};
int employee::count1=0;
int employee::count2=0;
int main(){
    int n;
    employee e[100];
    cout<<"Enter the number of employees";
    cin>>n;
    for (int i = 0;i<n;i++){
        e[i].getinfo();
    }
    employee::display();
    
   return 0; 
}