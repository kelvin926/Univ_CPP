#include <iostream>
using namespace std;

int main()
{
    int a = 0x01^0x01^0x01^0x01^0x01^0x00^0x00^0x00^0x00;
    int b = 0x00^0x01^0x01^0x01^0x01^0x01^0x00^0x00^0x01;
    int c = 0x00^0x00^0x01^0x01^0x01^0x01^0x01^0x00^0x00;
    int d = 0x00^0x00^0x00^0x01^0x01^0x01^0x01^0x01^0x01;
    int e = 0x01^0x00^0x00^0x00^0x01^0x01^0x01^0x01^0x00;
    int f = 0x01^0x01^0x00^0x00^0x00^0x01^0x01^0x01^0x01;
    int g = 0x01^0x01^0x01^0x00^0x00^0x00^0x01^0x01^0x00;
    int h = 0x01^0x01^0x01^0x01^0x00^0x00^0x00^0x01^0x00;


    cout << hex << a << endl;
    cout << hex << b << endl;
    cout << hex << c << endl;
    cout << hex << d << endl;
    cout << hex << e << endl;
    cout << hex << f << endl;
    cout << hex << g << endl;
    cout << hex << h << endl;

}