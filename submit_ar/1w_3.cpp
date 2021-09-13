#include <iostream>
#define size 10
using namespace std;

int main()
{
    for(int i = 0 ; i < size ; i++)     // size의 값 만큼 트리의 크기를 출력
    {
        for(int j = 0 ; j < (size - 1 - i) ; j++)      cout << " "; // 
        for(int k = 0 ; k < ((i*2) + 1) ; k++)     cout << "o";
        cout << endl;
    }
}