#include<stdio.h>
#include <stdlib.h>

int MAX(int, int);

void main()
{
    int n = 4;

    for(int i = -n+1; i < n; i++)
    {
        for(int j = -n+1; j < n; j++)
        {
            int value = MAX(abs(i),abs(j)) + 1;
            printf("%d", value);
        }
        printf("\n");
    }

}

int MAX(int a, int b)
{
    if(a>b)
        return a;
    else 
        return b;
}