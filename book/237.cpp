#include <iostream>
using namespace std;

bool avg(int x[], int size, int& result)
{
    result = 0;
    for(int i = 0 ; i < size ; i++) result += x[i];

    if(size <= 0) return false;
    else return true;
}

int main()
{
    int x[5] = {1, 5, 6, 7, 10};
    int size = 5;
    int result;

    if(avg(x, size, result)) cout << "값이 존재, " << result << endl;
    
}