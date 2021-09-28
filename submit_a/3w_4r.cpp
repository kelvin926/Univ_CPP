#include <iostream>
using namespace std;

class CoffeeMachine
{
private:
    int coffee, water, sugar;
public:
    CoffeeMachine();                    // 커피머신 클래스 기본 생성자
    CoffeeMachine(int a, int b, int c); // 변수 있
    void drinkEspresso();               // 에소프레소 함수 선언
    void drinkAmericano();              // 아메리카노 함수 선언
    void drinkSugarCoffee();            // 설탕 커피 함수 선언
    void show();                        // 자판기 상태를 보여줄 함수
    void fill();                        // 자판기를 채워줄 함수
};
CoffeeMachine::CoffeeMachine()          // 매개변수 없을 경우
{
    coffee = 0;     water = 0;      sugar = 0;
}

CoffeeMachine::CoffeeMachine(int a, int b, int c)   // 매개변수가 있는 경우
{
    coffee = a;     water = b;      sugar = c;      // 입력 받은 값을 그대로 저장
}

void CoffeeMachine::fill()                          // 커피 머신을 채우는 함수
{
    coffee = 10;    water = 10;     sugar = 10;     // 모든 항목을 10으로 설정
}

void CoffeeMachine::show()                          // 모든 항목을 보여주는 함수
{
    cout << "커피 마신 상태, 커피:" << coffee << "\t물:" << water << "\t설탕:" << sugar << endl;
}

void CoffeeMachine::drinkEspresso()     // 에소프레소는 커피가 1, 물이 1씩 소비된다.
{
    coffee -= 1;    water -= 1;
}

void CoffeeMachine::drinkAmericano()    // 아메리카노는 커피가 1, 물이 2씩 소비된다.
{
    coffee -= 1;    water -= 2;
}

void CoffeeMachine::drinkSugarCoffee()  // 설탕 커피는 커피 1, 물 2, 설탕 1이 소비된다.
{
    coffee -= 1;    water -= 2;     sugar -= 1;
}



int main()      // 책에 나오는 기본 코드
{
    CoffeeMachine java(5, 10, 3);
    java.drinkEspresso();
    java.show();
    java.drinkAmericano();
    java.show();
    java.drinkSugarCoffee();
    java.show();
    java.fill();
    java.show();
}