#include <iostream>
#define value_max 5
using namespace std;

int main()
{
    double a[value_max];
    double b;

    cout << value_max << "개의 변수를 입력하세요." << endl;
    for(int i = 0 ; i < value_max ; i++)    cin >> a[i];

    cout << "더할 "<< value_max << "개의 변수를 입력하세요." << endl;
    for(int i = 0 ; i < value_max ; i++)
    {
        cin >> b;
        a[i] += b;
    }
    for(int i = 0 ; i < value_max ; i++)    cout << a[i] << " ";
    cout << endl;
}