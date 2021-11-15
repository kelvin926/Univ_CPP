#include <iostream>
using namespace std;

class Random {
public:
    static void seed() { srand((unsigned)time(0)); }
    static int nextInt(int min = 0, int max = 32767);
    static char nextAlphabet();
    static double nextDouble();
};

char Random::nextAlphabet()
{
    char a = rand() % 2;
    if(a == 0)
    {
        a = (rand() % 26) + 65;
        return a;
    }
    else
    {
        a = (rand() % 26) + 65;
        return a;
    }
}

int Random::nextInt(int min, int max)
{
    int a = rand() % (max - min + 1) + min;
    return a;
}

double Random::nextDouble()
{
    double a = rand() / (double)(32767 + 1);
    return a;
}

int main()
{
    Random::seed();
    cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다" << endl;
    for(int i = 0 ; i < 10 ; i++)
        cout << Random::nextInt(1, 100) << ' ';
    cout << endl;

    cout << "알파벳을 랜덤하게 10개를 출력합니다" << endl;
    for(int i = 0 ; i < 10 ; i++)
        cout << Random::nextAlphabet() << ' ';
    cout << endl;

    cout << "랜덤한 실수 10개를 출력합니다" << endl;
    for(int i = 0 ; i < 5 ; i++)
        cout << Random::nextDouble() << ' ';
    cout << endl;

    for(int i = 0 ; i < 5 ; i++)
        cout << Random::nextDouble() << ' ';
    cout << endl;
}