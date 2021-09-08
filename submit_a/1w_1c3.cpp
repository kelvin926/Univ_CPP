#include <iostream>
using namespace std;

int main()
{
    int hap = 0; // 덧셈을 저장할 변수
    for(int i = 1 ; i < 11 ; i++)       hap += i; // 1부터 10까지 반복으로 더하기
    cout << "1에서 10까지 더한 결과는 " << hap << "입니다." << endl; // 결과물 출력
}