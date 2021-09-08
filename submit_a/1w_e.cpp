#include <iostream>
#include <string>
using namespace std;

int main()
{
    string answer("int main()"); // 정답을 저장할 answer string 생성 int main() 으로 설정
    string reply; // 답변을 저장할 reply string 생성
    // 문제
    cout << "퀴즈) C++ 응용프로그램이 실행을 시작하는 함수의 원형을 무엇인가?" << endl;
    getline(cin, reply); // 공백을 포함하여 문자를 받기

    if(reply == answer)     cout << "맞았습니다!" <<endl; // 정답
    else                    cout << "틀렸습니다! 정답은 " << answer <<"입니다!" << endl; // 오답
    
}