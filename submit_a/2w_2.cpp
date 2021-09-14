#include <iostream>
using namespace std;

int mul(int x, int y)           // x 와 y 인자 받기
{
    int result = x * y;         // result 변수 선언 후 x * y로 넣기
    return result;              // result 리턴
}

int main()
{
    int a, b;                   // a 와 b는 곱할 변수
    cout << "두 정수를 입력하세요 >> ";
    cin >> a >> b;              // a 와 b를 입력 받는다.
    cout << mul(a, b) << endl;  // a 와 b를 함수로 전달해서 받은 값을 출력
}