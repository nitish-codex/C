#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int nextPermutation(int n, char** str)
{
    // find decreasing sub set of array suffix
    int i = n-1;
    while(i > 0 && strcmp(str[i-1],str[i])>=0)
        i--; 
    // moment it fails the key value is identified and while loop stops
    // with exception of
    if (i == 0)
        return 0;
    
    // find the right most successor in suffix
    int j = n-1;
    while(strcmp(str[i-1],str[j]) >=0)
        j--;

    // swap the identified key with its successor in suffix 
    char* tmp = str[i-1];
    str[i-1] = str[j];
    str[j] = tmp;

    // reverse the suffix
    j = n-1;
    while(i<j)
    {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        i++;
        j--;
    }

    return 1;
}

int main()
{
    char** str;
    int n;
    scanf("%d\n",&n);

    // input n number of strings
    str = calloc(n,sizeof(char*));
    for(int i = 0; i < n; i++)
    {
        str[i] = calloc(11,sizeof(char));
        scanf("%s",str[i]);
    }

    // call recursive backtracking fucntion
    do
    {
        for(int i = 0; i < n; i++)
            printf("%s%c",str[i], i==n-1?'\n':' '); 
    } while(nextPermutation(n, str));
    
    
    // free up memory
    for(int i = 0; i < n; i++)
        free(str[i]);
    free(str);
}