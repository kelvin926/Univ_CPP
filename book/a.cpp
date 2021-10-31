#include <iostream>
using namespace std;

int main()
{
    cout << "정수의 개수를 입력하세요 >> ";
    int num;
    cin >> num;
    
    int *p = new int[num];
    for(int i = 0 ; i < num ; i++)
    cin >> p[i];
    
    for(int i = 0 ; i < num ; i++)
    cout << p[i] << " ";

    delete[] p;
}