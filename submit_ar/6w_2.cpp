#include <iostream>
using namespace std;

class Accumulator {
    int value;
public:
    Accumulator(int value) { this->value = value; }
    Accumulator& add(int n);
    int get() { return value; }
};

Accumulator & Accumulator::add(int n)
{
    value += n;                // value에다가 n 값을 더한다
    return *this;              // this 포인터의 역참조로 리턴한다
}   
/*  this 포인터의 역참조로 반환하는 이유는 결국 객체끼리 이어진 문법이기 때문에
    객체 참조로 반환 되어야 한다.
*/
int main()
{
    Accumulator acc(10);
    acc.add(5).add(6).add(7);  // acc의 value 멤버가 28이 된다.
    cout << acc.get() << endl; // 28 출력
}