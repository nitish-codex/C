#include <stdlib.h>
#include <stdarg.h>
#include <time.h>

#define MIN_ELEMENT 1
#define MAX_ELEMENT 1000000

void print (int count,...) {
    va_list args;
    // Declaring pointer to the
    // argument list
    va_list ptr;
    // Initializing argument to the
    // list pointer
    va_start(ptr, count);
 
    for (int i = 0; i < count; i++)
        // Accessing current variable
        // and pointing to next one
        printf("%d\n",va_arg(ptr, int));
 
    // Ending argument list traversal
    va_end(ptr); 
}

int main(){
     printf("\n\n Variadic functions: \n");
 
    // Variable number of arguments
    print(4, 11, 23, 53, 94);
    return 0;

}