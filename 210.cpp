#include<iostream>
using namespace std;
class MyClass {
    private:
    int value;
     public:
     MyClass():value(0){}
    MyClass(int value) : value(value) {}
    friend MyClass operator+(MyClass lhs, MyClass rhs);
    friend MyClass operator-(MyClass lhs, MyClass rhs);
    friend MyClass operator*(MyClass lhs, MyClass rhs);
    friend MyClass operator/(MyClass lhs, MyClass rhs);
    friend bool operator==(MyClass lhs, MyClass rhs);
    friend bool operator!=(MyClass lhs, MyClass rhs);
    friend bool operator<(MyClass lhs, MyClass rhs);
    friend bool operator>(MyClass lhs, MyClass rhs);
    friend bool operator<=(MyClass lhs, MyClass rhs);
    friend bool operator>=(MyClass lhs, MyClass rhs);
    friend MyClass& operator++(MyClass& obj);  
    friend MyClass operator++(MyClass& obj, int);  
    friend ostream& operator<<(ostream& os, MyClass obj);
    void display(){
        cout<<value<<endl;
    }
    int retvalue()
    {
        return value;
    }
};
MyClass operator+(MyClass lhs, MyClass rhs) {
    return MyClass(lhs.value + rhs.value);
}
MyClass operator-(MyClass lhs, MyClass rhs) {
    return MyClass(lhs.value - rhs.value);
}
MyClass operator*(MyClass lhs, MyClass rhs) {
    return MyClass(lhs.value * rhs.value);
}
MyClass operator/(MyClass lhs, MyClass rhs) {
    return MyClass(lhs.value / rhs.value);
}
bool operator==(MyClass lhs, MyClass rhs) {
    return lhs.value == rhs.value;
}
bool operator!=(MyClass lhs, MyClass rhs) {
    return lhs.value != rhs.value;
}
bool operator<(MyClass lhs, MyClass rhs) {
    return lhs.value < rhs.value;
}
bool operator>(MyClass lhs, MyClass rhs) {
    return lhs.value > rhs.value;
}
bool operator<=(MyClass lhs, MyClass rhs) {
    return lhs.value <= rhs.value;
}
bool operator>=(MyClass lhs, MyClass rhs) {
    return lhs.value >= rhs.value;
}
MyClass& operator++(MyClass& obj) { 
    ++obj.value;
    return obj;
}
MyClass operator++(MyClass& obj, int) { 
    MyClass temp = obj;
    ++obj.value;
    return temp;
}

ostream& operator<<(ostream& os, MyClass obj) {
    os << obj.value;
    return os;
}


int main()
{
    MyClass m1(2),m2(3),temp;
    temp = m1+m2;
    temp.display();
    temp = m1-m2;
    temp.display();
    temp = m1*m2;
    temp.display();
    temp = m1/m2;
    temp.display();
    if(m1==m2)
    {
        cout<<m1.retvalue()<<" and "<<m2.retvalue()<<" are equal"<<endl;
    }
    else
    cout<<m1.retvalue()<<" and "<<m2.retvalue()<<" are not equal"<<endl;
    
    return 0;
}
