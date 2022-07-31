#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr1;
    float b;
    printf("size of integer is %d",sizeof(int));
    ptr1 = (int *)malloc(sizeof(int)*10);
    printf("address of a is %u\n",ptr1);
    *ptr1 = 29;
    printf("*ptr1 = %d\n",*ptr1);
    ptr1++;
    *ptr1 = 429;
    printf("address of a is %u\n",ptr1);
    printf("*ptr1 = %d\n",*ptr1);
    ptr1--;
    free(ptr1);
    return 0;
}