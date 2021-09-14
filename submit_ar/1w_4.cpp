#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand((unsigned int)time(NULL));    // 지속적으로 랜덤값을 받기 위한 조건
    int a, b;                           // 랜덤 값을 받을 a, b 변수
    int ans;                            // 답변을 저장할 변수

    while(1)                            // 무한 반복
    {
        a = rand() % 50;
        b = rand() % 50;
        cout << a << " + " << b << " = ? | 정답 : ";
        cin >> ans;                     // 값 입력 받기

        if(ans != a + b)                // 오답 입력시
        {
            cout << "오답입니다!" << endl; // 오답 출력
            continue;                   // 아래 정답으로 빠지는 구문을 무시하고 다시 반복
        }

        cout << "정답입니다!" << endl;     // 정답 출력
        break;                          // 프로그램 종료
    }
}


