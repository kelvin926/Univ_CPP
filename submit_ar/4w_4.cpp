#include <iostream>
using namespace std;
 
class val               // 클래스 이름 딱히 생각 안 나요
{
private:
    int     num;        // num은 수를 입력할 변수
public:
    val();              // 기본 생성자
    val(int );          // 인자가 하나 있는 생성자
    void    set(int );  // set은 
    int     get();      // 
};

val::val(int a)         // 인자가 하나 있는 생성자
{
    this->num = a;      // this포인터로 잡은 num에 a값 넣기
}

void val::set(int a)    // set은 포인터 주소에 인자를 넣는 함수
{
    this->num = a;      // this포인터로 잡은
}

int val::get()          // get은 num 변수를 리턴
{
    return num;
}

void swap(val &a, val &b) 
{
    int temp;           // temp는 값 하나를 임시로 저장할 변수
    temp = a.get();     // temp에 a의 값 저장 
    a.set(b.get());     // a에 b값 저장
    b.set(temp);        // b에 a가 저장된 temp값 저장
}

int main() 
{
    val a(20), b(50);   // a에 20, b에 50 설정
    cout << "swap 전 : " << a.get() << " " << b.get() << endl;
    swap(a, b);         // swap 함수에 a, b 인자 전달
    cout << "swap 후 : " << a.get() << " " << b.get() << endl;
}