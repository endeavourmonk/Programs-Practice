//Demonstrate pre increment and post increment.
#include<stdio.h>
int main(){
    int x = 99, num; 
    num = ++x;
    printf("Pre Increment :\n");
    printf("num = %d \n",num);
    printf("x = %d\n",x);
    
    num = x++;
    printf("\npost Increment:\n");
    printf("num = %d \n",num);
    printf("x = %d\n",x);
    return 0;
}