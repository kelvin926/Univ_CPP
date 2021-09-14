#include <iostream>
#define moo 10
using namespace std;

int main()
{
    int a[moo];
    
    cout << "정수 "<< moo <<"개를 무작위로 입력해주세요.";
    for(int i = 0 ; i < moo ; i++)      cin >> a[i];

    cout << "입력한 배열 | ";
    for(int i = 0 ; i < moo ; i++)      cout << a[i] << " ";
    cout << endl;

    int tmp;
    for(int i = 0 ; i < moo ; i++)
    {
        for(int j = 0 ; j < moo - 1 - i ; j++)
        {
            if(a[j] > a[j+1])
            {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
    cout << "정리된 배열 | ";
    for(int i = 0 ; i < moo ; i++)       cout << a[i] << " ";
    cout << endl;
}