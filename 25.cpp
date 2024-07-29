#include <iostream>
#include <cstring>
using namespace std;
class STRING {
    char* str;
    int length;
public:
    STRING() : str(nullptr), length(0) {}
    STRING(const char* s) {
        length = strlen(s);
        str = new char[length + 1];
        strcpy(str, s);
    }
    STRING(const STRING& s) {
        length = s.length;
        str = new char[length + 1];
        strcpy(str, s.str);
    }
    ~STRING() {
        delete[] str;
    }
    STRING& operator=(const STRING& s) {
        if (this == &s) return *this; 

        delete[] str;
        length = s.length;
        str = new char[length + 1];
        strcpy(str, s.str);
        return *this;
    }
    STRING operator+(const STRING& s) const {
        STRING temp;
        temp.length = length + s.length;
        temp.str = new char[temp.length + 1];
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }
    bool operator==(const STRING& s) const {
        return strcmp(str, s.str) == 0;
    }
    void display() const {
        if (str) cout << str << endl;
        else cout << "String is empty" << endl;
    }
};
int main() {
    STRING s1("Hello ");
    STRING s2("World");
    STRING s3;
    s3 = s1 + s2; 
    s3.display(); 
    if (s1 == s2)
        cout << "s1 and s2 are equal" << endl;
    else
        cout << "s1 and s2 are not equal" << endl; 
    STRING s4 = s1; 
    s4.display();
    return 0;
}
