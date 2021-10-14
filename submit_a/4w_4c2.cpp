#include <iostream>
using namespace std;

int main()
{
    int *p = new int[5];            // 크가가 5인 정수형 배열 동적할당
    double sum = 0;                 // sum은 모든 원소의 합을 임시로 저장할 변수
    
    cout << "정수 5개 입력>> ";
    for(int i = 0 ; i < 5 ; i++)
    {
        cin >> p[i];                // 배열에 5번 입력 받기      
        sum += p[i];                // sum에 값 저장   
    }
    sum /= 5;                       // sum에서 5를 나눠서 평균 만들기
    cout << "평균 " << sum << endl;          // 출력
    delete [] p;                    // 동적할당 해제
}