#include<stdio.h>
int main(){
    int a = 354;
    float b =8.5;
    void * ptr; //It is not possible to dereference void pointers.
                //pointer arithmetic is not allowed with void pointers in C standard.
    ptr = &a;
    // printf("value of a is %d",*ptr);
    printf("value of a is %d\n",*(int *)ptr);
    ptr = &b;
    printf("value of b is %.2f",*(float *)ptr);
    return 0;
}