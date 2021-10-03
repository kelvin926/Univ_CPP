#include <iostream>
using namespace std;

class minecraft
{

private:
    char name[21];      // 이름의 길이는 최대 20글자
    int hp;             // 체력 설정
    int hunger;         // 배고픔 설정

public:
    minecraft(const char[], int, int);  // 생성자
    void info();                        // 정보를 출력해주는 함수
};

minecraft::minecraft(const char a[21], int b, int c)    // const 필수
{
    strcpy(name, a);    // name에다가 입력 받은 값을 넣어준다.
    hp = b;             // hp에 입력받은 값 넣어준다.
    hunger = c;         // hunger에 입력받은 값 넣어준다.
}

void minecraft::info()  // 정보를 출력하는 함수
{
    cout << name << "님의 정보" << endl;
    cout << "체력 : " << hp << endl;
    cout << "배고픔 : " << hunger << endl;
    puts("");           // 줄 바꿈 해주는 함수
}

int main()
{
    minecraft steve("Steve\0", 20, 10);         // steve 객체
    minecraft alex("Alex\0", 19, 14);           // alex 객체
    minecraft herobine("Herobine\0", 100, 100); // herobine 객체

    minecraft *v = &steve;  // 포인터 v는 steve 객채의 주소를 저장
    v->info();              // 포인터 v는 steve.info를 가르킨다.
    v = &herobine;          // 포인터 v는 herobine 객체의 주소를 저장
    v->info();              // 포인터 v는 herobine.info를 가르킨다.
    v = &alex;              // 포인터 v는 alex 객체의 주소를 저장
    v->info();              // 포인터 v는 alex.info 객체의 주소를 저장한다.

}

// 어릴 때 즐겨하던 마인크래프트를 객체로 프로그래밍 해보고 싶었습니다.