#include <iostream>
using namespace std;

class grade
{
private:
    char name[20];
    char score;
public:
    grade(char * s_name, char s_score);
    void show();
};

grade::grade(char * s_name, char s_score)
{
    strncpy(name, s_name, sizeof(char));
    score = s_score;
}

void grade::show()
{
    cout << "이름 : " << name << endl;
    cout << "성적 : " << score << endl;
}

int main()
{
    grade a("K", 'C');
    a.show();
}