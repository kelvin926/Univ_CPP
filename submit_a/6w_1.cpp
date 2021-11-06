#include <iostream>
using namespace std;

class Person{
    int id;
    double weight;
    string name;
public:
    void show() { cout << id << " " << weight << " " << name << endl; }
};

int main()
{
    Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);

}