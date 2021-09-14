#include <iostream>
#define moo 9       // 배열 크기 9
using namespace std;

void cal(int *aa)
{
    int vl;     // vl은 더할 값을 입력하는 곳
    cout << "더할 정수를 입력하세요 >> ";
    cin >> vl;  // 정수 입력
    for(int i = 0 ; i < moo ; i++)    aa[i] += vl; // 포인터 연산
}

int main()
{
    int a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90}; // 배열 선언
    int *p = a; // 포인터로 선언
    
    cout << "현재 배열 : ";
    for(int i = 0 ; i < moo ; i++)    cout << a[i] << " "; // 배열 출력
    cout << endl;
    cal(p);     // cal 함수에 함수 포인터 전달
    cout << "나중 배열 : ";
    for(int i = 0 ; i < moo ; i++)    cout << a[i] << " "; // 배열 재출력
    cout << endl;
    
}