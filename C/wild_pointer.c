#include<stdio.h>
//Driver Code
int main(){
    int* ptr; // This is a wild pointer(uninitialized pointer is called wild pointer).
    //(It points to a garbage address).
    *ptr = 435; //This is not a good thing to do so.
    int a=999;
    ptr = &a; //This is no longer a wild pointer.
    printf("value = %d and address = %u",*ptr,ptr);
    return 0;
}