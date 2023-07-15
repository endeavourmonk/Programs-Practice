#include<stdio.h>
int main(){
    int a;
    int *ptr1;
    float b;
    ptr1 = &a;
    printf("address of a is %u\n",ptr1);
    printf("value of a is %d\n",a);
    *ptr1 = 29;
    printf("value of a is %d\n",*ptr1);
    ptr1++;
    printf("address of a is %u\n",ptr1);
    *ptr1 = 35;
    printf("value is %d\n",*ptr1);
    return 0;
}