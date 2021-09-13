#include <iostream>
#include <stdlib.h> // rand 함수를 쓰기 위한 헤더파일
using namespace std;

int main()
{
    srand(time(NULL));      // 난수를 생성할 수 있게 만들어주는 함수
    int r = rand() % 1000;  // r은 생성된 난수에서 1000으로 나눈 나머지
    int in;                 // in은 사용자부터 입력받을 변수
    
    cout << "업다운 게임! 랜덤 숫자를 맞춰보세요. (범위 : 1~1000)"<< endl;
    for(int i = 0 ; ; i++)  // 맞출 때까지 무한반복
    {
        cin >> in;          // 입력 받기

        if(in <= 1000 && in >= 0) // 0~1000 범위 값만 입력 받기
        {
            if(r < in)      cout << "DOWN" << endl; // 입력 받은 값이 정답보다 높을 경우
            if(r > in)      cout << "UP" << endl;   // 입력 받은 값이 정답보다 낮을 경우
            if(r == in)                             // 정답을 맞췄을 경우
            {
                cout << "정답입니다. " << i << "번 시도하셨습니다." << endl; // 메시지 출력
                break;      // for문 브레이크
            }
        }
        else                // 범위에 맞지 않는 값을 입력했을 경우
        {
            cout << "숫자를 잘못 입력하셨습니다. 0부터 1000까지만 적어주세요." << endl;
            break;          // for문 브레이크
        }
    }

    return 0;               // 정상 종료
}