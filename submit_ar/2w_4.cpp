#include <iostream>
using namespace std;

class elec
{
    public:
        int us;     // us는 usage의 줄임
        int cal();  // 계산할 함수

};

int elec::cal()
{
    double price;

    // kWh별 전력 요금  https://junkigas.com/electricity-and-gas-prices/electricity-price-calculation
    if(us >= 0 && us <= 100)            price = 60.7 * us;
    else if(us >= 101 && us <= 200)     price = 6070 + 125.9 * (us - 100);
    else if(us >= 201 && us <= 300)     price = 18660 + 187.9 * (us - 200);
    else if(us >= 301 && us <= 400)     price = 37360 + 280.6 * (us - 300);
    else if(us >= 401 && us <= 500)     price = 65420 + 417.7 * (us - 400);
    else                                price = 107190 + (us - 500) * 709.5;

    price += 1600;  // 기본 요금
    
    return price;   // 가격 리턴
}

int main()
{
    elec a;       // 생성자
    double power; // power 설정

    cout << "전기 사용량을 입력하십시오(kWh) >> ";
    cin >> power; // 입력
    a.us = power; // 클래스에 변수 보내기
    cout << "전기 요금은 " << a.cal() << "원 입니다." << endl;

}