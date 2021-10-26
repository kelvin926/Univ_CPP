#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    string a;
    string b("exit");
    cout << "아래 한 줄을 입력하세요. (exit를 입력하면 종료합니다)" << endl;
    for( ;; )
    {   
        cout << ">>";
        getline(cin, a);
        if(a == b)  break;
        srand((unsigned)time(0));
        int n = rand();
        a[n % a.length()] = (char)(97 + n % 26);
        cout << a << endl;
    }
}