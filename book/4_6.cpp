#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    string s;
    string b("exit");
    cout << "아래 한 줄을 입력하세요. (exit를 입력하면 종료합니다)" << endl;
    for( ;; )
    {   
        cout << ">>";
        getline(cin, a);
        s.append(a);
        if(a == b)  break;
        for(int i = 0 ; i < a.length() ; i++)
        s[i] = a[a.length() - 1 - i];
        cout << s << endl;
        s = "";
    }
}