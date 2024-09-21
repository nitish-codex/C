#include<stdio.h>

int A[100];

void binary(int n)
{
    if(n < 1)
        {
            printf("%s",A);
            
        }
        
    else
        A[n-1] = 0;
        binary(n-1);
        A[n-1] = 1;
        binary(n-1);
}

void main()
{
    binary(3);
}