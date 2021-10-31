#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a("Hello World!");
    int temp;


    for(int k = 0 ; k < a.length() - 1 ; k++)
    {
    temp = a[0];
    for(int i = 0 ; i < a.length() ; i++)
    a[i] = a[i+1];
    a[a.length() - 1] = temp;
    cout << a << endl;
    }
    


    
}