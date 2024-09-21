#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char* s;
    // scanf("%s",s);
    s = "1v88886l256338ar0ekk";
    
    for (int i = 0; i < 10; i++)
    {
      int j = 0;
      int count = 0;
      while(s[j] != '\0')
      {
        // to convert charector to interger
        // other way around int to char
        // 23 - '0'
        // just subtract by '0'
        int _char = s[j]-48;
        if(i == _char)
          count++;
        j++;
      }
      printf("%d ",count);
    }
    printf("\n");
    return 0;
}
