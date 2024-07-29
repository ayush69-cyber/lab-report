#include <iostream>
using namespace std;

class Data {
    int num;
    friend void swap(Data*, Data*); 

public:
    void getinfo() {
        cout << "Enter the number: ";
        cin >> num;
    }

    void show() const {
        cout << num;
    }
};

void swap(Data* d1, Data* d2) {
    int temp = d1->num;
    d1->num = d2->num;
    d2->num = temp;
}

int main() {
    Data d1, d2;

    d1.getinfo();
    d2.getinfo();

    cout << "Before swapping d1.num = ";
    d1.show();
    cout << " d2.num = ";
    d2.show();
    cout << endl;

    swap(&d1, &d2);

    cout << "After swapping d1.num = ";
    d1.show();
    cout << " d2.num = ";
    d2.show();
    cout << endl;

    return 0;
}