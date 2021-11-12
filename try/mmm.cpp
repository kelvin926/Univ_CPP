#include <iostream>
using namespace std;

class Circle {
private:
    int radius;
public:
    Circle(const Circle& c);
    Circle() { radius = 1; }
    Circle(int radius) { this->radius = radius; }
    double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle(const Circle& c)
{
    this->radius = c.radius;
    cout << "복사 생성자 실행 radius = " << radius << endl;
}

int main()
{
    Circle scr(30);
    Circle est(scr);
    
    cout << "원본 " << scr.getArea() << endl;
    cout << "복사 " << est.getArea() << endl;
}