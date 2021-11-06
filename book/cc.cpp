#include <stdio.h>

int main()
{
    char kl, cl;
    for(int i = 0 ; i < 10 ; i++)
    {
    for(int k = 0 ; k < 10 ; k++)
    {
        kl = i % 10; cl = k % 10;
        if(kl == 3 || kl == 6 || kl == 9 || cl == 3 || cl == 6 || cl == 9)
        printf("* ");
        else
        printf("%d%d ", i, k);
    }
    puts("");
    } 
}