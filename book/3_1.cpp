#include <iostream>
using namespace std;

class Tower {
    int height;
public:
    Tower() { height = 1; }
    Tower(int a) { height = a; }
    void setHeight(int a) { height = a; }
    int getHeight() { return height; }
};

int main()
{
    Tower a[3];
    a[0].setHeight(100);
    a[1].setHeight(500);
    a[2].setHeight(1000);
    for(int i = 0 ; i < 3 ; i++)
    cout << "높이는 " << a[i].getHeight() << "미터" << endl;
}