#include<iostream>
using namespace std;
class matrix
{
  int m,n,*mat;
  public:
  matrix()
  {
      m = 0;
      n = 0;
      mat = new int[0];
  }
  ~matrix()
  {
      delete[] mat;
  }
  void getmat()
  {
      cout<<"Enter the number of rows and columns";
      cin>>m>>n;
  }
  void buildmat()
  {
      mat = new int[m*n];
      cout<<"Enter your elements";
      for(int i = 0;i<m*n;i++)
      {
         cin>>mat[i]; 
      }
  }
  void operator+(matrix& ma)
  {
      for(int i = 0;i<m*n;i++)
      {
          mat[i]+=ma.mat[i];
      }
  }
  
      void showmat(){
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << mat[i * n + j] << "\t";
            }
            cout << "\n";
        }
      }
};
int main()
{
    matrix m1,m2;
    m1.getmat();
    m1.buildmat();
    m1.showmat();
    m2.getmat();
    m2.buildmat();
    m2.showmat();
    m1+m2;
    cout<<"Sum of two matrix is:\n";
    m1.showmat();
    return 0;
}