#include <iostream>
#include <string>
using namespace std;

int main()
{
    int *a = new int[5];
    double avg = 0;
    cout << "정수 5개 입력>> ";
    for(int i = 0 ; i < 5 ; i++)
    {
        cin >> a[i];
        avg += a[i];
    }
    cout << "평균 " << avg / 5 << endl;
    delete [] a;
}