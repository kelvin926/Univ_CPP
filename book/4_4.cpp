#include <iostream>
using namespace std;

class Sample {
    int *p;
    int size;
public:
    Sample(int n) { size = n; p = new int [n]; }
    void read() { for(int i = 0 ; i < size ; i++) cin >> p[i]; }
    void write() { for(int i = 0 ; i < size ; i++) cout << p[i] << " "; cout << endl; }
    int big();
    ~Sample() { delete [] p; }
};
int Sample::big()
{
    int max = p[0];
    for(int i = 0 ; i < size - 1 ; i++)
    {
        if(p[i + 1] > max)
        max = p[i + 1];
    }

    return max;
}

int main()
{
    Sample s(10);
    s.read();
    s.write();
    cout << "가장 큰 수는 " << s.big() << endl;
}