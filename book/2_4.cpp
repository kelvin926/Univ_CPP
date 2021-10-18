#include <iostream>
using namespace std;

int main()
{
    cout << "5 개의 실수를 입력하라>>";
    double o[5];
    for(int i = 0 ; i < 5 ; i++)
    cin >> o[i];
    
    double max = o[0];
    for(int i = 0 ; i < 5 ; i++)
    {
        if(o[i + 1] > o[i])  max = o[i+1];
    }
    
    cout << "제일 큰 수 = " << max << endl;
}