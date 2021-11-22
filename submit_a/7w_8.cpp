#include <iostream>
#include <string>
using namespace std;

class Circle {
    int radius;
public:
    Circle(int radius = 0) { this->radius = radius; }
    void show() { cout << "radius = " << radius << "인 원" << endl; }
    friend Circle operator ++ (Circle &a, int x);
    friend Circle& operator ++ (Circle &a);
};

Circle operator ++ (Circle& a, int x)
{
    Circle tmp = a;
    a.radius++;
    return tmp;
}
Circle& operator ++ (Circle& a)
{
    a.radius++;
    return a;
}

int main()
{
    Circle a(5), b(4);
    ++a;
    b = a++;
    a.show();
    b.show();
}