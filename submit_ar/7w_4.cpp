#include <iostream>
using namespace std;

class Circle { 
private:
    static int count;
    int radius;
public:
    Circle() { radius = 0; addcount(); }
    Circle(int r) { radius = r; addcount(); }
    ~Circle() { count -= 1; }
void show() { cout << "Radius: " << radius << ", Count: " << count << endl; } 
static void addcount() { count += 1; }

};

int Circle::count = 0;

int main()
{
    Circle a(5);
    a.show();

    Circle *p = new Circle[2];

    for(int i = 0 ; i < 2 ; i++)
        p[i].show();

    a.show();

    delete [] p;
    a.show();
}