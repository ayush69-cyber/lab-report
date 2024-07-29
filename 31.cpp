#include <iostream>
using namespace std;

class nepcurr {
    float amount;
    int rupees, paisa;
  
public:
    nepcurr() {
        rupees = 0;
        paisa = 0;
        amount = 0;
    }
    nepcurr(float am) {
        amount = am;
        int temp = am * 10;
        paisa = (am - (temp / 10)) * 100;
        rupees = temp / 10;
        
    }
    float ret_amount()
    {
        return amount;
    }
    void display() {
        cout << "Rupees = " << rupees << " Paisa = " << paisa << endl;
    }
};

class uscurr {
    int dollar, cents;

public:
    uscurr() {
        dollar = 0;
        cents = 0;
    }
    uscurr(float am) {
        int temp = am * 100;
        dollar = temp / 100;
        cents = temp % 100;
    }
    uscurr(nepcurr ne) {
        
        float totalUsd = ne.ret_amount() / 98.51;  
        int temp = totalUsd * 100;
        dollar = temp / 100;
        cents = temp % 100;
    }
    void display() {
        cout << "Dollars = " << dollar << " Cents = " << cents << endl;
    }
};

int main() {
    nepcurr c1(98.51*20);
    c1.display();
    uscurr c2(c1);
    c2.display();
    return 0;
}
