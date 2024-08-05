#include<iostream>
using namespace std;
class publication{
    char title[30];
    float price;
    public:
    publication()
    {
        title[0] = '\0';
        price = 0;
    }
    void getdata(){
        cout<<"Enter the Title:";
        cin>>title;
        cout<<"Enter the Price:";
        cin>>price;
    }
    void putdata(){
        cout<<"Title = "<<title<<"\nPrice = "<<price<<endl;
    }
};
class book:protected publication{
    int pgcount;
    public:
    book()
    {
        pgcount = 0;
    }
    void getdata()
    {
        publication::getdata();
        cout<<"Enter the Page Count:";
        cin>>pgcount;
    }
    void putdata()
    {
        publication::putdata();
        cout<<"Page Count = "<<pgcount<<endl;
    }
};
class tape:protected publication{
    float playtime;
    public:
    tape()
    {
        playtime = 0;
    }
    void getdata(){
        publication::getdata();
        cout<<"Enter the Playing Time in Minutes:";
        cin>>playtime;
    }
    void putdata(){
        publication::putdata();
        cout<<"Playing Time = "<<playtime<<endl;
    };
};
int main()
{
    book b;
    tape t;
    b.getdata();
    t.getdata();
    b.putdata();
    t.putdata();
    return 0;
}