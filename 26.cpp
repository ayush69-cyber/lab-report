#include<iostream>
#include<cstring>
using namespace std;
class STRING {
    char str[100];
    int length;
public:
    STRING() {
        str[0] = '\0';
        length = 0;
    }
    STRING(const char* s) {
        length = strlen(s);
        if (length > 100) {
            length = 100;
        }
        strncpy(str, s, length);
        str[length] = '\0';
    }
    STRING& operator=(const STRING& s) {
        if (this == &s) return *this;
        length = s.length;
        strncpy(str, s.str, length);
        str[length] = '\0';
        return *this;
    }
    STRING operator+(const STRING& s) const {
        STRING temp;
        temp.length = length + s.length;
        if (temp.length > 100) {
            temp.length = 100;
        }
        strncpy(temp.str, str, length);
        temp.str[length] = '\0';
        strncat(temp.str, s.str, 100 - length);
        temp.str[temp.length] = '\0';
        return temp;
    }
    bool operator==(const STRING& s) const {
        return strcmp(str, s.str) == 0;
    }
    void display() {
        cout << str << endl;
    }
};
int main() {
    STRING s1("Hello"), s2("World"), temp;
    temp = s1 + s2;
    cout << "Added String: ";
    temp.display();

    if (s1 == s2)
        cout << "Both strings are equal\n";
    else 
        cout << "Both strings are different\n";

    s1 = s2;  
    cout << "Second string assigned to first: ";
    s1.display();

    return 0;
}
