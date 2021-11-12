#include <iostream>
using namespace std;

class Person {
    int id;
    double weight;
    string name;
public:
    Person(int id = 1, string name = "Grace", double weight = 20.5)
    { 
        this->id = id;
        this->name = name;
        this->weight = weight;
        addPerson();
    }
    void show() { cout << id << ' ' << weight << ' ' << name << ' ' << Person::numPerson << endl; }
    ~Person() { numPerson -= 1; }
    static int numPerson;
    static void addPerson() { numPerson += 1; }
    static void nPerson() { cout << numPerson << endl; }
};
int Person::numPerson = 0;

int main()
{
    Person grace;
    grace.show();

    Person helen(13, "Helen", 32.5);
    helen.show();
    
    Person *p = new Person[2] { {1, "D"}, {4, "A"} };
    p[0].show();
    p[1].show();

    Person::nPerson();
    delete [] p;
    Person::nPerson();
}