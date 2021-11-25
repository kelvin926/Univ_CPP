#include <iostream> 
using namespace std; 

class info { 
    int health, hungry; 
public: 
    info(int health = 20, int hungry = 20)
    {
        this->health = health;
        this->hungry = hungry; 
    } 
    info& operator += (info a)
    { 
        this->health += a.health;
        this->hungry += a.hungry; 
        return *this; 
    } 
    info& operator += (int p)
    { 
        this->health += p;
        this->hungry += p;
        return *this;
    } 
    void show() { cout << "체력 " << health << " | 배고픔 " << hungry << endl; } 
}; 

int main()
{ 
    info a(10, 5), b(5, 10), c(0, 0);
    cout << "---- 1구간 ----" << endl; 
    cout << "[플레이어 A 정보] ";
    a.show();
    cout << "[플레이어 B 정보] ";
    b.show();
    a += 3;
    a += b;
    cout << "---- 2구간 ----" << endl; 
    cout << "[플레이어 A 정보] ";
    a.show();
    cout << "[플레이어 B 정보] ";
    b.show(); 
    b += a;
    cout << "---- 3구간 ----" << endl; 
    cout << "[플레이어 A 정보] ";
    a.show();
    cout << "[플레이어 B 정보] ";
    b.show(); 
}
