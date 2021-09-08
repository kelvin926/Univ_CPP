#include <iostream>
using namespace std;

int main()
{
    int y1;
    
    cout << "연도를 정수형으로 입력하세요. (예 : 2014) : "; // 안내 메시지
    cin >> y1; // 입력받기
    // 윤년을 판단하는 XOR 함수
    if(((y1 % 4 == 0) && (y1 % 100 != 0)) || (y1 % 400 == 0))
            cout << y1 << "년은 윤년입니다." << endl; // 윤년이라는 메시지 출력
    else    cout << y1 << "년은 윤년이 아닙니다." << endl; // 윤년이 아니라는 메시지 출력
}