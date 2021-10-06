#include <iostream>
using namespace std;

int main()
{
    int a = 0x08^0x7c^0x02;
    int b = 0x0a^0xd4;
    int c = 0x0a^0x2b;
    int d = 0x02^0x6f;

    cout << hex << a << endl;
    cout << hex << b << endl;
    cout << hex << c << endl;
    cout << hex << d << endl;
}