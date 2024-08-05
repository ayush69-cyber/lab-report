#include <iostream>
using namespace std;

class sales {
    float dollsales[3];
public:
    sales() {
        for (int i = 0; i < 3; i++) dollsales[i] = 0;
    }
    void getdata() {
        for (int i = 0; i < 3; i++) {
            cout << "Enter sales for month " << i + 1 << ": ";
            cin >> dollsales[i];
        }
    }
    void putdata() {
        float totalSales = 0;
        for (int i = 0; i < 3; i++) {
            totalSales += dollsales[i];
        }
        cout << "Total sales done in last 3 months is: $" << totalSales << endl;
    }
};

class publication {
    char title[30];
    float price;
public:
    publication() {
        title[0] = '\0';
        price = 0;
    }
    void getdata() {
        cout << "Enter the Title: ";
        cin >> title;
        cout << "Enter the Price in Dollar: ";
        cin >> price;
    }
    void putdata() {
        cout << "Title = " << title << "\nPrice = $" << price << endl;
    }
    float retprice() {
        return price;
    }
};

class book : public publication, public sales {
    int pgcount;
public:
    book() : publication(), sales() {
        pgcount = 0;
    }
    void getdata() {
        publication::getdata();
        sales::getdata();
        cout << "Enter the Page Count: ";
        cin >> pgcount;
    }
    void putdata() {
        publication::putdata();
        sales::putdata();
        cout << "Page Count = " << pgcount << endl;
    }
};

class tape : public publication, public sales {
    float playtime;
public:
    tape() : publication(), sales() {
        playtime = 0;
    }
    void getdata() {
        publication::getdata();
        sales::getdata();
        cout << "Enter the Playing Time in Minutes: ";
        cin >> playtime;
    }
    void putdata() {
        publication::putdata();
        sales::putdata();
        cout << "Playing Time = " << playtime << " minutes" << endl;
    }
};

int main() {
    book b;
    tape t;

    cout << "Enter details for Book:" << endl;
    b.getdata();

    cout << "\nEnter details for Tape:" << endl;
    t.getdata();

    cout << "\nBook Details:" << endl;
    b.putdata();

    cout << "\nTape Details:" << endl;
    t.putdata();

    return 0;
}
