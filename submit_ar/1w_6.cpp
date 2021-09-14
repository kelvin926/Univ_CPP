#include <iostream>
using namespace std;

void cal(int a)
{
    int quotient = a / 10;
    
    switch(quotient)
    {
        case 10: 
            cout << "A+" << endl;
            break;
        case 9:
            cout << "A" << endl;
            break;
        case 8:
            cout << "B+" << endl;
            break;
        case 7:
            cout << "B" << endl;
            break;
        case 6:
            cout << "C+" << endl;
            break;
        case 5:
            cout << "C" << endl;
            break;
        case 4:
            cout << "D+" << endl;
            break;
        case 3:
            cout <<"D" << endl;
            break;
        default:
            cout << "F" << endl;
            break;
    }
}

int main()
{
    int score;
    
    cout << "절대평가 점수를 입력하세요. " << endl;
    cin >> score;
    if(score <= 100 && score >= 0)      cal(score);
    else    cout << "잘못 입력하셨습니다. 0-100점 사이를 입력해주세요." << endl;
}