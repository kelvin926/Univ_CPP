#include <iostream>
using namespace std;

class Person {
    string name;
public:
    Person() { }
    Person(string name) { this->name = name; }
    string getName() { return name; }
    void setName(string name) { this->name = name; }
};

class Family {
    Person *p;
    int size;
    string name;
public:
    Family(string name, int size) { p = new Person[size]; this->size = size; this->name = name; }
    void show() { for(int i = 0 ; i < size ; i++) cout << p[i].getName() << " "; cout << endl; }
    void setName(int num, string name) { p[num].setName(name); }
    ~Family() { delete [] p; }
};

int main()
{
    Family *simpson = new Family("Simson", 3);
    simpson->setName(0, "LAALA");
    simpson->setName(1, "HEllo"); 
    simpson->setName(2, "MASDFK"); 
    simpson->show();
}