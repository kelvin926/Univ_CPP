#include <iostream>
#define size 10
using namespace std;

int main()
{
    for(int i = 0 ; i < size ; i++)     // size의 값 만큼 트리의 크기를 출력
    {
        for(int j = 0 ; j < (size - 1 - i) ; j++)      cout << " "; 
        // 기호 사이즈에서 1을 뺀 값에서 i만큼 뺀 값까지 공백 출력 (-1한 이유는 그 뒤에 기호가 와야하므로)
        for(int k = 0 ; k < ((i*2) + 1) ; k++)     cout << "o";
        // 기호를 출력해준다. i*2 + 1만큼 출력한다.
        cout << endl;
    }
}