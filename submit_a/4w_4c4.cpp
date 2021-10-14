#include <iostream>
using namespace std;

class Sample {
    int *p;
    int size;

public:
    Sample(int n) {
        size = n ; p = new int[n];  // n개의 정수 배열 동적 생성
    }

    void read();    // 동적 할당받은 정수 배열 p에 사용자로부터 정수를 입력받음
    void write();   // 정수 배열ㅇ르 화면에 출력
    int big();  // 정수 배열에서 가장 큰 수 리턴
    ~Sample();  // 소멸자   
};
Sample::~Sample()
{
    delete [] p;    // 동적 할당 해제
}

void Sample::read()
{
    for(int i = 0 ; i < size ; i++) // size 만큼 입력 받기
    cin >> p[i];
}
void Sample::write()
{
    for(int i = 0 ; i < size ; i++) // size 만큼 출력하기
    cout << p[i] << " ";
    cout << endl;
}
int Sample::big()
{
    int max = 0;     // max 초기값은 0으로 초기화
    for(int i = 0 ; i < size ; i++) // size만큼 반복
    {
        if(p[i] > max) //  p[i]가 max보다 크면 max는 p[i값
        max = p[i];
    }

    return max;
}


int main()
{
    Sample s(10);   // 10개 정수 배열을 가진 Sample 객체 생성
    s.read();   // 키보드에서 정수 배열 읽기
    s.write();  // 정수 배열 읽기
    cout << "가장 큰 수는 " << s.big() << endl; // 가장 큰 수 출력
}
