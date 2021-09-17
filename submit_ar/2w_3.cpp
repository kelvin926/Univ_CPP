#include <iostream>
#include <string>
using namespace std;

void info(const char *a)
{
    int len = strlen(a);        // 입력 받은 문자열의 길이 구함
    char b[len];                // b는 뒤집을 문자열
    for(int i = 0 ; i < len ; i++)      b[i] = a[len - i - 1];
    // a 배열 맨 끝을 b배열 맨 처음으로 옮기기

    cout << "뒤집은 문자열 : " << b << endl; // 출력
}
int main()
{
    string a = "";              // 입력한 문자열을 저장할 변수

    cout << "문자열을 입력하세요." << endl << "입력할 문자열 : ";
    getline(cin, a);            // 문자열 입력

    const char *p = a.c_str();  // p 는 a 스트링 포인터 지정
    
    info(p);                    // info 함수로 넘김
}