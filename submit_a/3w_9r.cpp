#include <iostream>
#include <string>
using namespace std;

class Oval
{
private:
    int width;  // 정수값의 사각형 너비와 높이를 
    int height; // 가지는 width, height 변수 멤버
public:
    Oval();     // 매개변수 없는 생성자
    Oval(int x, int y); // 매개변수 있는 생성자
    ~Oval();    // Oval 해제자
    int getWidth(); // 타원의 너비를 리턴하는 getWidth() 함수멤버
    int getHeight(); // 타원의 높이를 리턴하는 getHeight() 함수 멤버
    void set(int w, int h); // 타원의 높이를 변경하는 set(int w, int h) 함수 멤버
    void show();     // 타원의 너비와 높이를 화면에 출력하는 show() 함수 멤버
};

Oval::Oval()    // 너비와 높이를 1로 초기화하는 매개 변수 없는 생성자
{
    width = height = 1; // 너비와 높이 1로 초기화
}

Oval::Oval(int x, int y)
{
    width = x;      height = y;
}

Oval::~Oval() // width와 height를 출력하는 소멸자
{
    cout << "해제자) witdh = " << width << ", height = " << height << endl;
}

int Oval::getHeight()   // 높이를 출력하는 함수
{
    return height;
}

int Oval::getWidth()    // 너비를 출력하는 함수
{
    return width;
}

void Oval::set(int w, int h) //
{
    width = w;  height = h;
}

void Oval::show()
{
    cout << "width = " << width << ", height = " << height << endl;
}

int main()
{
    Oval a, b(20, 9);
    a.set(5, 7);
    a.show();
}