#include<stdio.h>
#include<string.h>

/* Function to swap values at two pointers */
void swap(char *x, char *y)
{
        char temp;
        temp = *x;
        *x = *y;
        *y = temp;
}

void printFunc(char *str, int start, int end)
{
        int i;
        for (i = start; i < end; i++)
        {
                swap((str+start), (str+i));
                printf("%s\n",str);
        }
}

int main()
{
        char str[20] = "ABCDEF";
        int start = 0;
        int end = strlen(str);
        printFunc(str, start, end);
        return 0;
}

