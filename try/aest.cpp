#include <iostream>
#define p(a) ((a << 1) ^ (((a >> 7) & 1) * 0x1b))
using namespace std;

inline void prt(int s[4][4])
{
    for(int i = 0 ; i < 4 ; i++)
    {
        for(int k = 0 ; k < 4 ; k++)
        {
            cout.width(2);
            cout.fill('0');
            cout << hex << s[i][k] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

inline void mixcolumns(int state[4][4])
{
    unsigned char basic, axor, res;
    int mix[4][4] = {
        {2, 3, 1, 1},
        {1, 2, 3, 1},
        {1, 1, 2, 3},
        {3, 1, 1, 2}
        };
    
    for(int i = 0 ; i < 4 ; i++)
    {
        basic = state[0][i];  
        axor = state[0][i] ^ state[1][i] ^ state[2][i] ^ state[3][i];   
        res = state[0][i] ^ state[1][i];                                res = p(res);
        state[0][i] ^= res ^ axor;  res = state[1][i] ^ state[2][i];    res = p(res);
        state[1][i] ^= res ^ axor;  res = state[2][i] ^ state[3][i];    res = p(res);
        state[2][i] ^= res ^ axor;  res = state[3][i] ^ basic;          res = p(res);
        state[3][i] ^= res ^ axor;  
    }  
}

int main()
{
    int temp[16];
    int state[4][4] = {
    {0xd4, 0xe0, 0xb8, 0x1e},
    {0xbf, 0xb4, 0x41, 0x27},
    {0x5d, 0x52, 0x11, 0x98},
    {0x30, 0xae, 0xf1, 0x30}
    };

    prt(state);
    mixcolumns(state);

}