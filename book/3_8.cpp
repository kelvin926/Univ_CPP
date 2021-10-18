#include <iostream>
#include <string>
using namespace std;

class Integer {
    int num;
public:
    Integer() { }
    Integer(int a) { num = a; }
    Integer(string a) { num = stoi(a); }
    void set(int a) { num = a; }
    int get() { return num; }
    int isEven() 
    {
        if(num % 2 == 1)    return 0;
        else                return 1;    
    }
};

int main()
{
    Integer n(30);
    cout << n.get() << ' ';
    n.set(50);
    cout << n.get() << ' ';

    Integer m("300");
    cout << m.get() << ' ';
    cout << m.isEven();
}