#include <iostream>
#define year_s 2021                         // 연도는 2021년도로 설정
using namespace std;

class vehicle                               // vehicle class 선언
{
    public:
        int     cc, year;                   // 자동차 연식과 CC를 저장할 변수
        int     getVal();                   // getVal 함수
};

int vehicle::getVal()                       // vehicle 클래스의 getVal 함수
{
    double cost;                            // cost는 금액을 저장할 함수내 변수
    int yl = year_s - year;                 // 차령은 올해연도에서 지정된 연도 뺌
    if(cc <= 1000)      cost = cc * 80;     // 1000cc 이하는 cc당 80원
    if(cc <= 1600)      cost = cc * 140;    // 1001cc 이상 1600이하는 cc당 140원
    else                cost = cc * 200;    // 1601 이상부터는 cc당 200원

    cost += (cost / 100) * 30;              // 지방교육세 30퍼센트 부과

    int    s = 100 - 5*(yl - 2);            // 차령이 3년부터 11년일 때 적용률을 나타내는 변수
    cost    /= 100;                         // 임시로 cost 값을 100으로 나눔

    if(yl <= 2)         cost *= 100;        // 차령이 2년 이하면 세금 감면 안됨
    else if(yl <= 11)   cost *= s;          // 차령이 3년이면 5%감면, 4년이면 10%... 코딩
    else                cost *= 50;         // 그외 (차령이 12년 이상일 경우) 자동차세 반값

    /*  비효율적인 코딩이라 주석처리
    if(yl <= 2)         cost *= 100;        // 차령이 1, 2년이면 세금 할인 없음
    else if(yl == 3)    cost *= 95;         // 차령이 3년이면 세금 감면 5%
    else if(yl == 4)    cost *= 90;
    else if(yl == 5)    cost *= 85;
    else if(yl == 6)    cost *= 80;
    else if(yl == 7)    cost *= 75;
    */

    return cost;                            // cost return
}

int main()
{
    int cc, year;                           // cc는 배기량, year은 연식을 저장할 변수
    vehicle tax;                            // vehicle 클래스를 tax로 불러오기
    cout << "해당 자동차의 배기량(CC)를 입력하세요. >> "; 
    cin >> cc;                              // 배기량 입력
    cout << "해당 자동차의 연식을 입력하세요. >> ";
    cin >> year;                            // 연식 입력

    tax.cc = cc;                            // tax.cc에 입력 받은 값 넣기
    tax.year = year;                        // tax.year에 입력 받은 값 넣기

    int tax_s = tax.getVal();               // tax의 getVal에서 얻은 값 입력
    cout << "해당 자동차의 자동차세는 " << tax_s << "원입니다." << endl; // 값 출력
}

