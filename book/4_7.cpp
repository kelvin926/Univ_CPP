#include <iostream>
using namespace std;

class Circle {
    int radius;

public:
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14 * radius * radius; }
};

int main()
{   
    Circle a[3];
    int radius, count;
    for(int i = 0 ; i < 3 ; i++)
    {
        cout << "원 " << i+1<<"의 반지름 >> ";
        cin >> radius;
        a[i].setRadius(radius);
        if(a[i].getArea() > 100)
        count++;
    }
    cout << "면적이 100보다 큰 원은 " << count << "개 입니다." << endl;
}

