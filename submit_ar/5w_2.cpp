#include <iostream>
#include <string>
using namespace std;

class Member{

private:
    string name;
    string id;
    int age;

public:
    Member()    // 기본 생성자: “noname”, “none”, 0 으로 멤버 변수를 초기화
    {
        name = "noname";
        id = "none";
        age = 0;
    }
    Member(string a, string b, int c)
    {           // 인자가 3개인 생성자: 3개의 인자를 이용하여, name, id, age 초기화
        name = a;
        id = b;
        age = c;
    }
    void set(string a, string b, int c)
    {           // private멤버변수의값을각각수정할수있는set함수
        name = a;
        id = b;
        age = c;
    }
    void get(string a, string b, int c)
    {           //private멤버변수의값을각각이용할수있는set함수
        name = a;
        id = b;
        age = c;
    }
    void printM()
    {
        cout << name << ", " << id << ", " << age << endl;
    }           // 출력
};

int main()
{
    Member Kim;                           // Kim 객체 생성
    Member Lee("Lee Hi", "2016001", 22);  // Lee 객체 생성
    Kim.printM();                         // Kim 객체 출력
    Lee.printM();                         // Lee 객체 출력
    
    Kim.set("Kim Haha", "2016020", 29);   // Kim 객체 수정
    Kim.printM();                         // Kim 객체 출력
    
}