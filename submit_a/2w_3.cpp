#include <iostream>
#define moo 10
using namespace std;

int main()
{
    int a[moo];     // a 배열은 입력 받고 정리할 배열
    
    cout << "정수 "<< moo <<"개를 무작위로 입력해주세요.";
    for(int i = 0 ; i < moo ; i++)      cin >> a[i]; // 10개 정수 입력

    cout << "입력한 배열 | ";
    for(int i = 0 ; i < moo ; i++)      cout << a[i] << " "; // 출력
    cout << endl;

    int tmp;
    for(int i = 0 ; i < moo ; i++)      // 버블 오름차순 정리 알고리즘
    {
        for(int j = 0 ; j < moo - 1 - i ; j++) // 배열 크기 - 1 - i 돌리기
        {
            if(a[j] > a[j+1])           // 앞 배열이 뒷 배열보다 클 경우
            {
                tmp = a[j];             // 앞 배열을 tmp에 넣고          
                a[j] = a[j+1];          // 뒷 배열을 앞 배열에 넣는다
                a[j+1] = tmp;           // 뒷 배열에 tmp 넣기
            }
        }
    }   // 정리된 배열 출력
    cout << "정리된 배열 | ";
    for(int i = 0 ; i < moo ; i++)       cout << a[i] << " ";
    cout << endl;
}