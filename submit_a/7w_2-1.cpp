#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    int price, pages;
public:
    Book(string title = "", int price = 0, int pages = 0)
    {
        this->title = title;
        this->price = price;
        this->pages = pages;
    }
    void show() { cout << title << ' ' << price << "원" << pages << " 페이지" << endl; }
    string getTitle() { return title; }
    bool operator == (string a)
    {
        if(title == a) return true;
        else return false;
    }
    bool operator == (int a)
    {
        if(price == a) return true;
        else return false;
    }
    bool operator == (Book& a)
    {
        if(this->price == a.price && this->title == a.title && this->pages == a.pages)
        return true; else return false;
    }
};

int main()  
{
    Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
    if(a == 30000) cout << "정가 30000원" << endl;
    if(a == "명품 C++") cout << "명품 C++ 입니다." << endl;
    if(a == b) cout << "두 책이 같은 책입니다." << endl;
}