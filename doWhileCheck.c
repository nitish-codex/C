#include<stdio.h>

int main()
{
    char* str = {"nitish", "kumar", "pal"};
    int i;
    do
    {
        for(i = 0; i < 6; i++)
            printf("%s%c",str[i],i==4?'\n':' ');
    } while (i<5);
    
}