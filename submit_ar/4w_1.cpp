#include <iostream>
#define MAX 2
using namespace std;

class Complex
{
private:
    int     real;           // 정수 부분  
    int     image;          // 허수 부분

public:
    Complex();              // 기본 생성자
    Complex(int, int);      // 인자가 있는 생성자
    void    set(int, int);  // real, image 값을 수정할 수 있는 함수
    void    showC();        // real, image를 복소수 형태로 출력하는 함수

};

Complex::Complex()          // 기본 생성자는 real, image 값을 각각 1로 초기화
{
    real = 1;
    image = 1;
}

Complex::Complex(int a, int b) // 인자가 2개인 생성자
{
    real = a;               // 인자 값을 이용하여 멤버 변수 a 초기화
    image = b;              // 인자 값을 이용하여 멤버 변수 a 초기화
}

void Complex::set(int a, int b)
{
    real = a;               // 인자 값을 이용하여 멤버 변수 a 초기화
    image = b;              // 인자 값을 이용하여 멤버 변수 a 초기화
}

void Complex::showC()       // real과 image를 복소수 형태로 출력하는 함수
{
    cout << real << " + " << image << "i" << endl;  // 출력
}

int main()
{
    Complex data[MAX];       // Complex 객체 data 생성
    Complex *p = &data[0];   // 클래스 포인터 p는 첫 번째 데이터를 지정
    for(int i = 0 ; i < MAX ; i++) 
        data[i].showC();     // for문을 사용하여 객체 배열 data 정보 출력
    cout << "--------------" << endl;
    data[0].set(3, 1);       // 첫 번째 배열 객체에 real 값을 3으로 업데이트
    data[0].showC();         // 출력
    *p = data[1];            // 두 번째 배열 객체를 포인터로 잡는다
    p->set(1, -8);           // 복소수 값을 -8로 업데이트   
    p->showC();              // 출력
    
}