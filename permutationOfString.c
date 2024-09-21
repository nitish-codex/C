// C++ program to print all
// permutations with duplicates allowed
#include<stdio.h>
#include<string.h>

/* Function to swap values at two pointers */
void swap(char *str, char *x, char *y)
{
	char temp;
        temp = *x;
        *x = *y;
        *y = temp;
}

/* Function to print permutations of string
This function takes three parameters:
1. String
2. Starting index of the string
3. Ending index of the string. */
void permute(char *str, int start, int end)
{
        int i;
        if (start == end) // when i is equals to the length of the string.
                printf("%s\n",str);
        else
        {
                for (i = start; i < end; i++)
                {
                        swap(str,(str+start), (str+i));
                        permute(str, start+1, end);
                        swap(str,(str+start), (str+i)); //backtrack
                }
        }
}

/* Driver program to test above functions */
int main()
{
        char str[20] = "ABC";
        int start = 0;
        int end = strlen(str);
        permute(str, start, end);
        return 0;
}