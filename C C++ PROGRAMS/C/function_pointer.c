// Date : 13.09.2021
// Function pointers points to code not data.
// Function pointers are useful to implement callback functions.
// Unlike normal pointer we do not allocate deallocate memory using function pointers.

#include<stdio.h>

int sum(int a, int b){
    return a + b;
}
int main(){
    // Declaring a function pointer.
    int (*fPtr)(int, int);  // there will be a function that will return int and takes two integers.
    // And fPtr will points to that function.

    // Creating a function pointer.
    fPtr = &sum;
    int d = (*fPtr)(5, 7);
    printf("Sum = %d", d);
    return 0;
}