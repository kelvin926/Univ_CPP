#include <iostream>
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
    void    pCom();        // real, image를 복소수 형태로 출력하는 함수

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

void Complex::pCom()       // real과 image를 복소수 형태로 출력하는 함수
{
    cout << real << " + " << image << "i" << endl;  // 출력
}

int main()
{
    Complex *a;                 // Complex 첫 번째 객체 동적 생성
    Complex *b;                 // Complex 두 번째 객체 동적 생성
    a = new Complex;            // a 객체 동적할당
    b = new Complex;            // b 객체 동적할당
    a->pCom();                  // 객체 a 정보 출력
    b->pCom();                  // 객체 b 정보 출력
    cout << "--------------" << endl;

    a->set(4, 1);               // a 객체는 실수 부분 4로 변경
    b->set(1, 9);               // b 객체는 허수 부분 9로 변경
    a->pCom();                  // 객체 a 정보 출력
    b->pCom();                  // 객체 b 정보 출력

    delete [] a;                // a 동적 메모리 해제
    delete [] b;                // b 동적 메모리 해제

}