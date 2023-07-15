#include<stdio.h>
#include<stdlib.h>

int* functionDangling(){
    int a=33 , b=99;
    // static int sum;
    int sum;
    sum = a + b;
    return &sum;
}
//Driver Code
int main(){
    //case 1: Deallocation of a memory block.
    int *ptr;
    ptr = (int *)malloc(4*sizeof(int));
    *(ptr + 0) = 11; // ptr [0] = 11
    *(ptr + 1) = 22;
    *(ptr + 2) = 33;
    *(ptr + 8) = 88;
    printf("0th element is %d and address is %u",ptr[0],(ptr+0));
    printf("\n1th element is %d and address is %u",ptr[1],(ptr+1));
    printf("\n2th element is %d and address is %u",ptr[2],(ptr+2));
    free(ptr); // ptr is now a dangling pointer
    printf("\n0th element is %d",ptr[0]);
    
    //Case 2 : Function returning a local variable address.
    int * dangPtr = functionDangling();
    // printf("\n\nsum = %d",*dangPtr);

    //Case 3 : if a variable goes out of scope.
    int *danglingPtr3;
    {
        int c = 888;
        danglingPtr3 = &c;
        printf("\n\nvalue of c is %d and address of c is %u",*danglingPtr3,danglingPtr3);
    }
    // Here variable goes out of scope which means danglingPtr3 is pointing to a location which is
    // freed and hence danglingPtr3 is now a dangling pointer.
    printf("\nvalue of c is %d and address of c is %u",*danglingPtr3,danglingPtr3);
    return 0;
}