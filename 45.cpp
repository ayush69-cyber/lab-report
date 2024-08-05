#include <iostream>
#include <cstring>
using namespace std;

class Inventory {
private:
    int quant; // number on hand
    int reorder; // reorder quantity
    double price; // price per unit
    char* descrip; // description of item
public:
    Inventory(int q, int r, double p, const char* d) 
        : quant(q), reorder(r), price(p) {
        descrip = new char[strlen(d) + 1];
        strcpy(descrip, d);
    }
    virtual ~Inventory() {
        delete[] descrip;
    }
    virtual void print() const {
        cout << "Description: " << descrip << endl;
        cout << "Quantity on hand: " << quant << endl;
        cout << "Reorder quantity: " << reorder << endl;
        cout << "Price per unit: $" << price << endl;
    }
};

class Auto : public Inventory {
private:
    char* manufacturer;
public:
    Auto(int q, int r, double p, const char* d, const char* man)
        : Inventory(q, r, p, d) {
        manufacturer = new char[strlen(man) + 1];
        strcpy(manufacturer, man);
    }
    ~Auto() {
        delete[] manufacturer;
    }
    void print() const override {
        Inventory::print();
        cout << "Manufacturer: " << manufacturer << endl;
    }
};

class Transmission : public Inventory {
private:
    char* vendor;
public:
    Transmission(int q, int r, double p, const char* d, const char* ven)
        : Inventory(q, r, p, d) {
        vendor = new char[strlen(ven) + 1];
        strcpy(vendor, ven);
    }
    ~Transmission() {
        delete[] vendor;
    }
    void print() const override {
        Inventory::print();
        cout << "Vendor: " << vendor << endl;
    }
};

int main() {
    // a. Create an instance object of Auto called Car
    Auto Car(5, 2, 15545.91, "Toyota Car", "Toyota");
    cout << "Car Details:" << endl;
    Car.print();
    cout << endl;

    // b. Create an instance object of Transmission
    Transmission trans(25, 10, 1789.98, "Transmission", "Aztec Inc.");
    cout << "Transmission Details:" << endl;
    trans.print();

    return 0;
}
