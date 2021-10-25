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
    Circle *a;
    int circle_num, temp_radius, big = 0;
    cout << "원의 개수 >> ";
    cin >> circle_num;
    a = new Circle[circle_num];

    for(int i = 1 ; i <= circle_num ; i++)
    {
        cout << "원 " << i << "의 반지름 >> ";
        cin >> temp_radius;
        a[i].setRadius(temp_radius);
        if(a[i].getArea() > 100)
        big++;
    }
    
    cout << "면적이 100보다 큰 원은 " << big << "개 입니다" << endl;
    
    delete [] a;
}

