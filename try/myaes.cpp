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

inline void addroundkey(int state[4][4], int key[4][4])
{
    for(int i = 0 ; i < 4 ; i++)
    for(int k = 0 ; k < 4 ; k++)
        state[i][k] = (state[i][k] + key[i][k]) % 0x100;
}

inline void subbyte(int state[4][4])
{
    const unsigned char sbox[16][16] = {
    {0x63, 0x7C, 0x77, 0x7B, 0xF2, 0x6B, 0x6F, 0xC5, 0x30, 0x01, 0x67, 0x2B, 0xFE, 0xD7, 0xAB, 0x76},
    {0xCA, 0x82, 0xC9, 0x7D, 0xFA, 0x59, 0x47, 0xF0, 0xAD, 0xD4, 0xA2, 0xAF, 0x9C, 0xA4, 0x72, 0xC0},
    {0xB7, 0xFD, 0x93, 0x26, 0x36, 0x3F, 0xF7, 0xCC, 0x34, 0xA5, 0xE5, 0xF1, 0x71, 0xD8, 0x31, 0x15},
    {0x04, 0xC7, 0x23, 0xC3, 0x18, 0x96, 0x05, 0x9A, 0x07, 0x12, 0x80, 0xE2, 0xEB, 0x27, 0xB2, 0x75},
    {0x09, 0x83, 0x2C, 0x1A, 0x1B, 0x6E, 0x5A, 0xA0, 0x52, 0x3B, 0xD6, 0xB3, 0x29, 0xE3, 0x2F, 0x84},
    {0x53, 0xD1, 0x00, 0xED, 0x20, 0xFC, 0xB1, 0x5B, 0x6A, 0xCB, 0xBE, 0x39, 0x4A, 0x4C, 0x58, 0xCF},
    {0xD0, 0xEF, 0xAA, 0xFB, 0x43, 0x4D, 0x33, 0x85, 0x45, 0xF9, 0x02, 0x7F, 0x50, 0x3C, 0x9F, 0xA8},
    {0x51, 0xA3, 0x40, 0x8F, 0x92, 0x9D, 0x38, 0xF5, 0xBC, 0xB6, 0xDA, 0x21, 0x10, 0xFF, 0xF3, 0xD2},
    {0xCD, 0x0C, 0x13, 0xEC, 0x5F, 0x97, 0x44, 0x17, 0xC4, 0xA7, 0x7E, 0x3D, 0x64, 0x5D, 0x19, 0x73},
    {0x60, 0x81, 0x4F, 0xDC, 0x22, 0x2A, 0x90, 0x88, 0x46, 0xEE, 0xB8, 0x14, 0xDE, 0x5E, 0x0B, 0xDB},
    {0xE0, 0x32, 0x3A, 0x0A, 0x49, 0x06, 0x24, 0x5C, 0xC2, 0xD3, 0xAC, 0x62, 0x91, 0x95, 0xE4, 0x79},
    {0xE7, 0xC8, 0x37, 0x6D, 0x8D, 0xD5, 0x4E, 0xA9, 0x6C, 0x56, 0xF4, 0xEA, 0x65, 0x7A, 0xAE, 0x08},
    {0xBA, 0x78, 0x25, 0x2E, 0x1C, 0xA6, 0xB4, 0xC6, 0xE8, 0xDD, 0x74, 0x1F, 0x4B, 0xBD, 0x8B, 0x8A},
    {0x70, 0x3E, 0xB5, 0x66, 0x48, 0x03, 0xF6, 0x0E, 0x61, 0x35, 0x57, 0xB9, 0x86, 0xC1, 0x1D, 0x9E},
    {0xE1, 0xF8, 0x98, 0x11, 0x69, 0xD9, 0x8E, 0x94, 0x9B, 0x1E, 0x87, 0xE9, 0xCE, 0x55, 0x28, 0xDF},
    {0x8C, 0xA1, 0x89, 0x0D, 0xBF, 0xE6, 0x42, 0x68, 0x41, 0x99, 0x2D, 0x0F, 0xB0, 0x54, 0xBB, 0x16}
    };

    for(int i = 0 ; i < 4 ; i++)
    for(int k = 0 ; k < 4 ; k++)
    state[i][k] = sbox[(state[i][k] / 16)][state[i][k] % 16];
}

inline void shiftrows(int state[4][4])
{
    int temp[3];
    temp[0] = state[1][0];             // 2번째줄 1 shift
    for(int i = 0 ; i < 3 ; i++)
    state[1][i] = state[1][i+1];
    state[1][3] = temp[0];

    temp[0] = state[2][0];             // 3번째줄 2 shift
    temp[1] = state[2][1];
    state[2][0] = state[2][2];
    state[2][1] = state[2][3];
    state[2][2] = temp[0];
    state[2][3] = temp[1];

    for(int i = 0 ; i < 3 ; i++)      // 4번째줄 3 shift
    temp[i] = state[3][i];
    state[3][0] = state[3][3]; 
    for(int i = 0 ; i < 3 ; i++)
    state[3][i+1] = temp[i];
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

inline void keyexpansion(int state[4][4], int roundkey[4][4])
{
    int rcon[4][10] = {
    {0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x1b, 0x36},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    };

    int backup_state[4][4];
    int backup_roundkey[4][4];
    for(int i = 0 ; i < 4 ; i++)
    for(int k = 0 ; k < 4 ; k++)
    {
        backup_state[i][k] = state[i][k];         // state 업
        backup_roundkey[i][k] = roundkey[i][k];   // roundkey 백업
        state[i][k] = roundkey[i][k];             // state 덮기
    }

    int rotword_temp = state[0][3];         // RotWord 과정
    for(int i = 0 ; i < 3 ; i++)
    state[i][3] = state[i+1][3];
    state[3][3] = rotword_temp;

    subbyte(state);                         // SubWord 과정
    for(int i = 0 ; i < 4 ; i++)         
    roundkey[i][3] = state[i][3];
    
    for(int i = 0 ; i < 4 ; i++)
    roundkey[i][0] = state[i][3]^backup_roundkey[i][0]^rcon[i][0];

    for(int i = 0 ; i < 3 ; i++)
    for(int k = 0 ; k < 4 ; k++)
    roundkey[k][i+1] = roundkey[k][i]^backup_roundkey[k][i+1]^rcon[i+1][k];


    for(int i = 0 ; i < 4 ; i++)            // state 되돌리기
    for(int k = 0 ; k < 4 ; k++)
    state[i][k] = backup_state[i][k];

} 

int main()
{
    int state[4][4] = {
    {0x08, 0x03, 0x08, 0x0b},
    {0x02, 0x0e, 0x12, 0x13},
    {0x00, 0x13, 0x00, 0x00},
    {0x0d, 0x07, 0x0b, 0x18}
    }; 
    int key[4][4] = {
    {0x08, 0x0e, 0x09, 0x09},   // main
    {0x0b, 0x08, 0x09, 0x09},
    {0x0b, 0x13, 0x09, 0x09},
    {0x03, 0x09, 0x09, 0x09}
    }; 
    /*
    int key[4][4] = {
    {0x2b, 0x28, 0xab, 0x09},   // check
    {0x7e, 0xae, 0xf7, 0xcf},
    {0x15, 0xd2, 0x15, 0x4f},
    {0x16, 0xa6, 0x88, 0x3c}
    }; */
    unsigned char keybit;

    cout << "평문" <<endl;
    prt(state);

    cout << "키" <<endl;
    prt(key);

    cout << "키 크기 입력 (128, 192, 256)>> ";
    int keysize;
    cin >> keysize;
    char r;
    if(keysize == 128)       r = 10;
    else if(keysize == 192)  r = 12;
    else if(keysize == 256)  r = 14;
    else                    return 0;
    //                      ADD  ROUND KEY [0 ROUND]
    

    addroundkey(state, key);
    cout << "[0 라운드] AddRoundKey" << endl;
    prt(state);

    for(int i = 1 ; i < r ; i++) //*
    {
        keyexpansion(state, key);
        cout << "[" << dec << i-1 << " 라운드] Key Ex" << endl;
        prt(key);
        
        subbyte(state);
        cout << "[" << dec << i << " 라운드] Subbyte" << endl;
        prt(state);
        
        shiftrows(state);
        cout << "[" << dec << i << " 라운드] ShiftRows" << endl;
        prt(state);

        mixcolumns(state);
        cout << "[" << dec << i << " 라운드] Mixcolumns" << endl;
        prt(state);

        addroundkey(state, key);
        cout << "[" << dec << i << " 라운드] AddRoundKey" << endl;
        prt(state);
    }
    
    subbyte(state);
    cout << "[LAST 라운드] Subbyte" << endl;
    prt(state);
        
    shiftrows(state);
    cout << "[LAST 라운드] ShiftRows" << endl;
    prt(state);

    addroundkey(state, key);
    cout << "[LAST 라운드] AddRoundKey" << endl;
    prt(state);
}