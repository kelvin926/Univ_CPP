#include <iostream>
using namespace std;

class Circle{
    int num;
public:
    Circle() { }
    Circle(int num) { this->num = num; }
    void setNum(int num) { this->num = num; }
    int getNum() { return num; }
};

void swap(Circle &a, Circle &b)
{
    int temp = a.getNum();
    a.setNum(b.getNum());
    b.setNum(temp);
}

int main()
{
    Circle a(5), b(10);
    cout << a.getNum() << " " << b.getNum() << endl;
    swap(a, b);
    cout << a.getNum() << " " << b.getNum() << endl;

}
