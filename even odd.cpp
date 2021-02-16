#include <stdio.h>

int main()
{
    int a[100]={1,2,3,4,5,6,7,8,9,10};
    
    for(int i = 0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            printf("Even= %d " ,a[i]);
        }
        else
        {
            printf("Odd= %d " ,a[i]);
        }
    }
