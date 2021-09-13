#include <iostream>
using namespace std;
 
class CAL 
{
    double a, b;                        // 계산을 위한 변수, a와 b는 private로 지정
    
    public:
        void value(double x, double y);    
        double add();                   // 덧셈 함수
        double sub();                   // 뺄셈 함수  
        double gop();                   // 곱셈 함수 
        double div();                   // 나눗셈 함수
};
 
void CAL::value(double x, double y)
{
    a = x;                              // 데이터 변환
    b = y; 
}

double CAL::add()                       // CAL에 add 함수가 불러지면
{
    return a+b;                         // a+b를 반환
}
double CAL::sub()                       // CAL에 sub 함수가 불러지면
{
    return a-b;                         // a-b를 반환
}
double CAL::gop()                       // CAL에 gop 함수가 불러지면
{
    return a*b;                         // a*b를 반환
}
double CAL::div()                       // CAL에 div 함수가 불러지면
{
    return a/b;                         // a/b를 반환
}

int main() 
{
    double x, y;                        // x, y는 입력받을 식
    char op;                            // 부호를 저장할 변수
    CAL cal;                            // CAL cal로 넘기는 함수
 
    cout << "식을 입력하세요. (예 : 56+10) "; // 출력
    cin >> x >> op >> y;                // 차례대로 입력 받는다
    cout << "결과 값 : ";                 // 결과값 출력 부분
    cal.value(x, y);                    // cal의 value함수로 값을 넘긴다.
 
    switch (op)                         // op의 부호에 따라 결과값이 달라진다.
    {
        default:
            cout << "잘못 입력하셨습니다.";
            break;
        case '+':                       // + 일경우 cal.add 함수 결과값 출력
            cout << cal.add();
            break;
    
        case '-':                       // - 일 경우 cal.sub 함수 결과값 출력
            cout << cal.sub();
            break;
            
        case '*':                       // * 일 경우 cal.gop 함수 결과값 출력
            cout << cal.gop();
            break;
    
        case '/':                       // / 일 경우 cal.div 함수 결과값 출력
            cout << cal.div();
            break;
    }
    cout << endl;                       // 줄바꿈
}