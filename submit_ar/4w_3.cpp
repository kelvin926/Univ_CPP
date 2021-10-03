#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "input size: ";
    cin >> size; 

    // int arrStatic[size] = {1, 3, 5 }; 가능한가?
    int arrStatic[4] = { 1, 3, 5 };
    
    int *pdynamic = new int[size];
    
    for(int i = 0 ; i < size ; i++)
        pdynamic[i] = i * 3;

    for(int i = 0 ; i < size ; i++)
        cout << pdynamic[i] << " ";

    delete[] pdynamic;
    pdynamic = NULL;
    
    return 0;
}