#include<stdio.h>

int distinct(const char *a){
    int x[26];
    
    for(int i = 0; i<26;i++){
        x[i] = 0;
        printf("x[%d] = %d\t", i,x[i]);
    }
       
    for(int i=0;a[i] != '\0'; i++){
        x[a[i] - 'a']++;
    }
    int count = 0;
    for(int i=0;i<26;i++){
        if(x[i] >= 1)
            count++;
    }
   printf("%s=%d\n", a, count);
    return count;
}

void main()
{
    char* c = "nitish";
    // scanf("%s",c);
    int n = distinct(c);
    printf("%d",n);
}