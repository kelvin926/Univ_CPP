#include <iostream>
using namespace std;
 
class Square                        // 클래스 선언
{
private:
    int width;                      // 가로
    int height;                     // 세로
public:
    void setSize(int width, int height); // 사각형 변의 길이를 정하는 함수
    double getArea();               // 사각형 넓이를 구하는 함수
};
 
void Square::setSize(int x, int y)  // 사각형 변의 길이를 정하는 함수
{
    width = x;
    height = y;
}
 
double Square::getArea()            // 사각형 변의 면적을 구하는 함수
{
    return width * height;          // 가로 * 세로 반환
}    
 
int main()                      
{
    Square *a;                      // Square 클래스 포인터로 선언
    int x, y;                       // x, y는 사각형의 가로와 세로를 임시로 넣을 변수
    cout << "사각형의 가로와 세로 길이 : ";
    cin >> x;
    cin >> y;               // 입력
    a->setSize(x, y);               // 보내기
    cout << "사각형의 넓이 : " << a->getArea() << endl; // 출력
}
