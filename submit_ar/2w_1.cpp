#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a;                                          // 변수 a 입력
    int *p = &a;                                    // 포인터 p는 a의 주소
    cout << "정수 하나를 입력하세요 >> ";
    cin >> *p;                                      // a의 주소로 넣기
    cout << a << "의 제곱근 : " << sqrt(*p) << endl;   // 포인터 제곱근 출력
}