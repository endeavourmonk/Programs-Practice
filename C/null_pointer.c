#include<stdio.h>
//Driver Code
int main(){
    int a=33;
    int *ptr = &a;
    printf("value of a is %d",*ptr);
    printf("\naddress of a is %u",ptr);
    ptr = NULL;
    if(ptr != NULL)
        printf("\naddress of a is %u",ptr);
    else
        printf("\npointer is a null pointer so cannot be dereferenced");
    return 0;
}