#include <iostream>
using namespace std;

int main()
{
    cout << "두 수를 입력하라>>"; 
    int a, b, max;
    cin >> a >> b; // 수를 동시에 받기
    if(a > b)       max = a; // a가 b보다 크면 a를 큰 수로 설정
    else            max = b; // 아닐 경우 b가 큰 수로 설정
    
    cout << "큰 수 = " << max << endl; // 결과 값 출력
}
