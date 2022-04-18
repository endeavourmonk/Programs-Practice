// C program to understand difference between 
// pointer to an integer and pointer to an
// array of integers. 
#include <stdio.h>
int main()
{
    // Pointer to an integer
    int *p; 
      
    // Pointer to an array of 5 integers
    int (*ptr)[5]; 
    int arr[5];
      
    // Points to 0th element of the arr.
    p = arr;
      
    // Points to the whole array arr.
    ptr = &arr; 

    printf("p = %u , ptr = %u",p,ptr);
    p++; 
    ptr++;
    printf("\n p = %u , ptr = %u",p,ptr);
    return 0;
}