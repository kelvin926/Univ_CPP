#include <iostream> 
#define SIZE 3
using namespace std;

int& refReturn(int *p, int index);

int main() 
{
    int i, a[SIZE] = { 1, 2, 3 };
    for (i = 0; i < SIZE; i++) cout << a[i] << ", "; // a 배열 원소 전부 출력
    cout << endl;           // 줄바꿈
    refReturn(a, 2) = 5;    // refReturn으로 a 배열과 2 값을 보냄
    for (i = 0; i < SIZE; i++) cout << a[i] << ", ";
    cout << endl; 
}

int& refReturn(int *p, int index) 
{ 
    int &r = p[index];
    return r;
}