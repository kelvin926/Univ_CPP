#include <iostream>
using namespace std;

class Circle{
    int radius;
public:
    Circle() { radius = 1; }
    Circle(int r) { radius = r; }
    void setRadius(int r) { radius = r; }
    double getArea() { return 3.14 * radius * radius; }
};

int main()
{
    Circle *array = new Circle[3];
    
    for(int i = 0 ; i < 3 ; i++)
    array[i].setRadius(i+1);

    Circle *p = array;

    for(int i = 0 ; i < 3 ; i++)
    {
        p->setRadius(i+2);
        cout << p->getArea() << " ";
    }

    delete [] p;
}