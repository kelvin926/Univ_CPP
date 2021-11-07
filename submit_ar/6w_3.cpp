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
    Book(Book& b);
    ~Book()
    void set(char* title, int price);
    void show() { cout << title << '' << price << "원" << endl; }
};

int main() 
{
    Book cpp("명품C++", 10000);
    Book java = cpp;
    java.set("명품자바", 12000);
    cpp.show();
    java.show();
}