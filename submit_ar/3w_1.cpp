#include <iostream>
#include <string>
using namespace std;

class Account {

private:
    string name;
    int id, balance;        // Account는 name, id, balance의 3 멤버변수

public:
    Account();              // 생성자
    Account(string n, int a, int b);
    int withdraw(int a);    // withdraw 출금 함수
    int desposit(int a);    // desposit 입금 함수
    int inquiry();          // 계좌 잔액확인하는 함수
    string getOwner();      // getOwner는 이름
};

Account::Account()          // 기본 생성자
{
    name = "";
    id = 0;
    balance = 0;
}

Account::Account(string n, int a, int b)// 변수 생성자
{
    name = n;
    id = a;
    balance = b;
}

string Account::getOwner()              // 이름을 반환하는 함수
{
    return name;
}

int Account::inquiry()                  // 현재 금액을 출력하는 함수
{
    return balance;
}

int Account::withdraw(int a)            // 출금하는 함수
{
    if(a > balance)     return balance; // 출금하려는 금액이 가지고 있는 돈보다 많으면 무효
    else                balance -= a;   // 정상일 경우 돈에서 출금한 금액을 출력
    
    return balance;                     // 금액 반환
}

int Account::desposit(int a)            // 입금하는 함수
{
    balance += a;
    return balance;
}


int main()      // 컴퓨터언어 책에서 주어지는 기본 코딩
{
    Account a("kitae", 1, 5000);
    a.desposit(50000);
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
    int money = a.withdraw(20000);
    cout << a.getOwner() <<"의 잔액은 " << a.inquiry() << endl;
}