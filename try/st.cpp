#include <iostream>
using namespace std;

class Person {
public:
    int money;
    void addMoney(int money) { this->money += money; }
    
    static int sharedMoney;
    static void addShared(int n) { sharedMoney += n; }
};

int Person::sharedMoney = 10;

int main()
{
    Person a;
    a.addShared(10);
    cout << a.sharedMoney;
}