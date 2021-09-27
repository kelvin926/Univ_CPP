#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a = "";
    getline(cin, a);

    cout << a << endl << endl;

    for(int k = 1 ; k < 27 ; k++)
    {
        for(int i = 0 ; i < a.length() ; i++)
        {
            a[i] += 1;
            
            if(a[i] > 'z')       a[i] = a[i] - 123 + 'a';
        }
        cout << "key is " << k << " | " << a << endl << endl;
    }
}


