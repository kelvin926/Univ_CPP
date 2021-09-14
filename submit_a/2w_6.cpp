#include <iostream>
#define key 1       // 암호화 키는 1로 설정
using namespace std;

void encry(char *en)                          // 인자 전달 받음
{
    cout << "평문 : " << en << endl;           // 평문 출력
    for(int i = 0 ; i < strlen(en) ; i++)  
    {
        if(en[i] == ' ')    continue;         // 공백일 경우 암호화 안 함
        else                en[i] += key;     // 공백이 아닐 경우 전부 암호화
    }
    cout << "암호화 : " << en << endl;          // 암호화 된 문장 출력
}

int main()
{
    char str[] = {"THIS GONNA BE ENCRYTPED"}; // 암호화 될 문장
    char *p = str;                            // 문자열 포인터
    encry(p);                                 // 함수로 인자 전달
}