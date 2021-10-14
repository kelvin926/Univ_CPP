#include <iostream>
using namespace std;

class gcd{

private:
    int a, b;                   // 입력받은 두 값을 저장할 변수
    int divisor;                // 공약수를 저장할 변수

public:
    gcd();                      // 기본 생성자
    int prt(int, int);          // 최대공약수를 뽑을 함수 
};

gcd::gcd()
{
    divisor = 0;                // 생성자 divisor은 0으로 설정
}

int gcd::prt(int a, int b)      // 최대공약수를 뽑을 함수
{
    if (b == 0)
    return a;
    return gcd::prt(b, a % b);  // 유클리드 호제법 재귀 함수
}

int main()
{
    gcd g;                      // gcd 클래스 g 생성
    int a, b;
    cout << "두 정수를 입력하세요>> ";
    cin >> a >> b;
    cout << "두 정수의 최대공약수는 " << g.prt(a, b) << "입니다." << endl;

}