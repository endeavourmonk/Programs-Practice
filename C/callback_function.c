// Date : 13.09.2021
// Function pointers are used to pass a function to a function.
// This passed function can then be called again (hence the name callback function).

#include<stdio.h>

int sum(int a, int b){
    return a + b;
}

void greetHelloAndExecute(int (*fptr)(int, int)){
    printf("HEllo world!\n");
    printf("sum of 5 and 8 is %d",(*fptr)(5, 8));
}

void greetGmAndExecute(int (*fptr)(int, int)){
    printf("Good Morning!\n");
    printf("sum of 1 and 8 is %d",fptr(1, 8));
}

// Driver Code
int main(){
    int (*fptr)(int, int);
    fptr = sum;     // you should use & also. Because instruction is also an address.
    greetHelloAndExecute(fptr);
    return 0;
}