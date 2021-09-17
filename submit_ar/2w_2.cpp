#include <iostream>
#include <math.h>
#define st_n 5
using namespace std;

int cal(double ap[])
{
    double         sum = 0;     // 변수들의 합을 저장할 변수
    double deviation[st_n];     // 편차를 저장할 변수
    for(int i = 0 ; i < st_n ; i++)     sum += ap[i]; // 값 입력
    sum /= st_n;                // 지금부터 sum 변수는 평균이다.
    
    double dispersion = 0;      // 분산을 저장할 변수
    for(int i = 0 ; i < st_n ; i++)
    {
        deviation[i] = ap[i] - sum;     // 편차 = 변수 - 평균을 저장
        dispersion += deviation[i] * deviation[i]; // 편차 제곱들의 합을 구함
    }
    dispersion /= st_n;         // 평균으로 나누어 분산 값을 도출

    return dispersion;          // 분산 값 리턴
}

int main()
{
    double     score[st_n];     // 변수를 저장할 배열
    double     *p = score;      // 포인터 p는 score을 지참하는 포인터

    cout << st_n << "개의 수를 입력하세요." << endl;

    for(int i = 0 ; i < st_n ; i++)     cin >> p[i];    // 값 입력
    
    cout << st_n << "개 자료의 분산 : " << cal(p) << endl; 
    cout << st_n << "개 자료의 표준편차 : " << sqrt(cal(p)) << endl;
}