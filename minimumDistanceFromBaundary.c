#include<stdio.h>

void main()
{
    int n = 5;
    int len = (n*2)-1;

    for (int i = 1; i <= len; i++)
    {
        for (int j = 0; j <= len; j++)
        {
            // min of the vertical distances
            int min1 = i <= len - i ? i : len-i;
            int min2 = j <= len - j ? j : len-j;
            int min = min1 <= min2 ? min1 : min2;
            printf("%d",n-min);
        }
        printf("\n");
    }
}