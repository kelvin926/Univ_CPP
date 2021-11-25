#include <iostream>
#include <string>
using namespace std;

class Book{
    string title;
    int price;
    int page;
public:
    Book(string title = "", int price = 0, int page = 0)
    {
        this->page = page;
        this->price = price;
        this->title = title;
    }
    void show() { cout << title << " " << price << "원 " << page << " 페이지" << endl;  }
    string getTitle() { return title; }
    friend Book operator+=(Book &a, int b);
    friend Book operator-=(Book &a, int b);
};
Book operator+=(Book& a, int b)
{
    a.price += b;
    return a;
}

Book operator-=(Book& a, int b)
{
    a.price -= b;
    return a;
}

int main()
{
    Book a("청준", 20000, 300), b("미래", 30000, 500);
    a += 500;
    b -= 500;
    a.show();
    b.show();
}