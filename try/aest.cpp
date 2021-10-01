#include <iostream>
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
    int mix[4][4] = {
    {2, 3, 1, 1},
    {1, 2, 3, 1},
    {1, 1, 2, 3},
    {3, 1, 1, 2}
    };
    
    int temp[4][4];
    for(int i = 0 ; i < 4 ; i++)
    for(int k = 0 ; k < 4 ; k++)
    temp[i][k] = state[i][k];

    // 열이 2 3 1 1인 경우  
    state[0][0] = ( (temp[0][0] << 1) ^ ((temp[1][0] << 1)^temp[1][0]) ^ temp[2][0] ^ temp[3][0] ) % 0x100;
    state[0][1] = ( (temp[0][1] << 1) ^ ((temp[1][1] << 1)^temp[1][1]) ^ temp[2][1] ^ temp[3][1] ) % 0x100;
    state[0][2] = ( (temp[0][2] << 1) ^ ((temp[1][2] << 1)^temp[1][2]) ^ temp[2][2] ^ temp[3][2] ) % 0x100;
    state[0][3] = ( (temp[0][3] << 1) ^ ((temp[1][3] << 1)^temp[1][3]) ^ temp[2][3] ^ temp[3][3] ) % 0x100;
    
    // 열이 1 2 3 1인 경우
    state[1][0] = ( temp[0][0] ^ (temp[1][0] << 1) ^ ((temp[3][0] << 1)^temp[3][0]) ^ temp[0][0] ) % 0x100;

    // 열이 1 1 2 3인 경우
    state[2][0] = ( temp[0][0] ^ temp[1][0] ^ (temp[2][0]^;
    prt(state);
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