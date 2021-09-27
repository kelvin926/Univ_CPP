#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random    // Random 클래스
{
public:
    Random();   // 랜덤 생성자
    int next();
    int nextInRange(int a, int b);
};

Random::Random()    // Random의 Random 
{
    srand((unsigned)time(0));
}

int Random::next()  // 랜덤 숫자를 하나 지목하고 반환하는 함수
{
    int n = rand();
    return n;
}

int Random::nextInRange(int a, int b) // 정말 랜덤값을 만드는 함수
{
    return rand() % (b - a + 1) + a;
}

int main()          // 책에서 제공하는 기본 코드
{
    Random r;   
    cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;
    for(int i = 0 ; i < 10 ; i++)
    {
        int n  = r.next();
        cout << n << ' ';
    }
    cout << endl << endl << "--2에서 " << "4 까지의 랜덤 정수 10개 --" << endl;
    for(int i = 0 ; i < 10 ; i++)
    {
        int n = r.nextInRange(2, 4);
        cout << n << ' ';
    }
    cout << endl;
}
