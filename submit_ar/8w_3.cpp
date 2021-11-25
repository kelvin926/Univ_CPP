#include <iostream>
using namespace std;

class goodperson {
private:
    int money;
public:
    goodperson(int money) { this->money = money; }
    void show() { cout << "차칸 사람이 현재 가진 돈 | " << money << endl; }
    void makemoney() { money += 10000; }
    friend class badperson;
};

class badperson {
private:
    int money;
public:
    badperson(int money) { this->money = money; }
    void show() { cout << "납쁜 사람이 현재 가진 돈 | " << money << endl; }
    void takemoney(goodperson& p)
    {
        cout << "[납쁜 사람이 차칸 사람의 돈을 뜯어갑니다.]" << endl;
        this->money += p.money;
        p.money = 0;
    }
};

int main()
{
    goodperson a(10000);
    badperson b(10000);
    a.makemoney();
    a.show();
    b.show();

    b.takemoney(a);

    a.show();
    b.show();
}