#include <iostream>
#define value_max 5
using namespace std;

int main()
{
    double a[value_max]; // a배열과 배열의 합을 저장할 변수
    double b;            // a배열에 영향을 줄 변수

    cout << value_max << "개의 변수를 입력하세요." << endl;
    for(int i = 0 ; i < value_max ; i++)    cin >> a[i]; // a 배열 입력

    cout << "더할 "<< value_max << "개의 변수를 입력하세요." << endl;
    for(int i = 0 ; i < value_max ; i++) 
    {
        cin >> b; // 변수 b 입력
        a[i] += b; // a 배열에 더하기
    }
    for(int i = 0 ; i < value_max ; i++)    cout << a[i] << " "; // 배열 출력
    cout << endl;
}