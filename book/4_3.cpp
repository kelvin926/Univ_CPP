#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    int cnt = 0;
    cout << "문자열 입력>> ";
    getline(cin, a);
    for(int i = 0 ; i < a.length() - 1 ; i++)
    {
        if(a[i] == 'a')
        cnt++;
    }
    cout << "문자 a는 " << cnt << "개 있습니다." << endl;    
}