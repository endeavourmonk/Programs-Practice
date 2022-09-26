//Demonstrate pre decrement and post decrement.
#include<stdio.h>
int main(){
    int x = 99, num;
    num = --x;
    printf("Pre decrement :\n");
    printf("num = %d \n",num);
    printf("x = %d\n",x);
    
    num = x--;
    printf("\npost decrement:\n");
    printf("num = %d \n",num);
    printf("x = %d\n",x);
    return 0;
}