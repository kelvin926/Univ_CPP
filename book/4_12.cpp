#include <iostream>
#include <string>
using namespace std;

class Circle {
    int radius;
    string name;
public:
    void setCircle(string name, int radius) { this->name = name; this->radius = radius; }
    double getArea() { return 3.14 * radius * radius; }
    string getName() { return this->name; }
};

class CircleManager {
    Circle *p;
    int size;
    int c_size;
    string search;
    
public:
    CircleManager(int size);
    ~CircleManager() { delete [] p; }
    void searchByName();
    void searchByArea();
};
CircleManager::CircleManager(int size)
{
    p = new Circle[size];
    string t_name;
    int t_radius;
    this->size = size;
    for(int i = 0 ; i < size ; i++)
    {
        cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
        cin >> t_name >> t_radius;
        p[i].setCircle(t_name, t_radius);
    }
    
}
void CircleManager::searchByName()
{
    cout << "검색하고자 하는 원의 이름 >> ";
    cin >> search;
    for(int i = 0 ; i < size ; i++)
    if(p[i].getName() == search)
    cout << p[i].getName() << "의 면적은 " << p[i].getArea() << endl;
}
void CircleManager::searchByArea()
{
    cout << "최소 면적을 정수로 입력하세요 >>";
    cin >> c_size;
    for(int i = 0 ; i < size ; i++)
    if(p[i].getArea() > c_size)
    cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ",";
    cout << endl;
}
int main()
{
    int size;
    cout << "원의 개수 >> ";
    cin >> size;
    CircleManager a(size);
    a.searchByName();
    a.searchByArea();
}