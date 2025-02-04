// C program to demonstrate working of memset() 

// ptr ==> Starting address of memory to be filled
// x   ==> Value to be filled
// n   ==> Number of bytes to be filled starting 
//         from ptr to be filled

// A unique contradictory example of memset()

void *memset(void *ptr, int x, size_t n);
#include <stdio.h> 
#include <string.h> 
  
void printArray(int arr[], int n) 
{ 
   for (int i=0; i<n; i++) 
      printf("%d ", arr[i]); 
} 
  
int main() 
{ 
    int n = 10; 
    int arr[n]; 
  
    // Fill whole array with 100. 
    memset(arr, 10, n*sizeof(arr[0]));
    // memset(arr, -1, n*sizeof(arr[0])); 
    printf("Array after memset()\n"); 
    printArray(arr, n); 
  
    return 0; 
}