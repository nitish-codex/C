#include<stdio.h>
#include<string.h>

void printFunc(char *str, int end)
{
        int i;
        for (i = 0; i < end; i++)
        {
                printf(str+i);
                printf("\n");

                char* x = str + i;
                printf(x);
                printf("\n");
        }
}



int main()
{
        char str[20] = "ABCDEF";
        int start = 0;
        int end = strlen(str);
        printFunc(str, end);
        return 0;
}