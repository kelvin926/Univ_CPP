#include <iostream>
using namespace std;

void change(int *a, int *b)         // a와 b 포인터로 받는다
{
    int tmp;        // tmp 생성
    tmp = *b;       // tmp에 b 넣기
    *b = *a;        // b에 a 넣기
    *a = tmp;       // a에 tmp 넣기
}

int main()
{
    int a, b;       // 입력받은 두 정수를 저장할 변수
    cout << "두 정수를 입력하세요 >> ";
    cin >> a >> b; // 입력
    cout << "입력한 수 : " << a << " " << b << endl; // 출력
    change(&a, &b);                                // 함수 보내기
    cout << "역전한 수 : " << a << " " << b << endl; // 재출력
}