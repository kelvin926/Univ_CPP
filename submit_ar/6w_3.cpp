#include <iostream>
using namespace std;

class Book {
    char *title;
    int price;
public:
    Book(char* title, int price)
    {
        this->title = title;
        this->price = price;
    }
    Book(const Book& b);
    ~Book();
    void set(char* title, int price);
    void show() { cout << title << " " << price << "원" << endl; }
};

Book::Book(const Book& b)
{
    this->price = b.price;
    title = new char [strlen(b.title) + 1];
    strncpy(title, b.title, strlen(b.title));
}

Book::~Book()
{
    if(title)
    delete [] title;
}

void Book::set(char* title, int price)
{
    this->title = title;
    this->price = price;
}
int main() 
{
    Book cpp("명품C++", 10000);
    Book java = cpp;
    java.set("명품자바", 12000);
    cpp.show();
    java.show();
}