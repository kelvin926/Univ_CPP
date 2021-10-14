#include <iostream>
using namespace std;

class Circle{
    int radius; // 원의 반지름 값

public:
    void setRadius(int radius); // 반지름을 설정한다.
    double getArea();           // 면적을 리턴한다.
};

void Circle::setRadius(int radius)
{
    this->radius = radius;
}

double Circle::getArea()
{
    return 3.14 * radius * radius;
}

int main()
{
    int n, r, cnt = 0;  // n은 원의 개수, r은 원의 반지름, cnt는 100보다 큰 원
    cout << "원의 개수 >> ";
    cin >> n;                   // 입력받은 크기
    Circle *p = new Circle[n];  // 객체 배열 포인터 동적할당 


    // 면적이 100 이상인 원 카운팅.
    for(int i = 0 ; i < n ; i++)
    {
        cout << "원 " << i + 1 << "의 반지름 >> ";
        cin >> r;
        p[i].setRadius(r);      // 반지름 정보 입력
        if(p[i].getArea() >= 100)
        cnt++;
    }
    
    // 해당 정보 출ㄹ력
    cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다" << endl;

    delete [] p;        // 동적 메모리 해제
}