#include <iostream>
using namespace std;

class Sample{
    int *p;
    int size;

public:
    Sample(int n){  // 생성자
        size = n;
        p = new int[n];
    }
    // 동적 할당 받은 정수 배열 p에 사용자로부터 정수를 입력받음
    void read();   
    void write();   // 정수 배열을 화면에 출력
    int big();      // 정수 배열에서 가장 큰 수 리턴
    ~Sample();      // 소멸자
};
Sample::~Sample()   // 소멸자
{
    delete [] p;    // p 동적할당 해제
}

void Sample::read()
{
    cout << "[Plz, enter 10 integer data]" << endl << ">> ";
    for(int i = 0 ; i < 10 ; i++)   // 인풋
    cin >> p[i];
}

void Sample::write()
{
    cout << "Stored data:";
    for(int i = 0 ; i < 10 ; i++)   // 출력
    cout << " " << p[i];
    cout << endl;
}

int Sample::big()
{
    int max = 0;
    for(int i = 0 ; i < 10 ; i++)
    {
        if(this->p[i] > max)    // max보다 값이 크면 max에 넣기
        max = this->p[i];
    }
    return max;     // max 반환
}

int main()
{
    Sample s(10);   // 10개의 정수 배열을 가진 Sample 객체 생성
    s.read();       // 키보드에서 정수 배열 읽기
    s.write();      // 정수 배열 출력
    cout << "가장 큰 수는 " << s.big() << endl; // 가장 큰 수 출력
}