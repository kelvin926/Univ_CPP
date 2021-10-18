#include <iostream>
using namespace std;

int main()
{
    for(int i = 0 ; i < 10 ; i++)
    {
        for(int k = 0 ; k < 10 ; k++)
        {
            cout << k << "x" << i << "=" ;
            cout.width(2);

            cout << left << k * i << " ";
        }
        cout << endl;
    }

}