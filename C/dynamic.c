#include<stdio.h>
#include<stdlib.h>
int main(){
    int l,i;
    int * ptr;
    printf("Enter length of array :");
    scanf("%d",&l);
    ptr = (int *) malloc(l * sizeof(int));
    printf("Enter data in array :\n");
    for(i=0; i<l ; i++)
        scanf("%d",(ptr+i));
    for(i=0; i<l ; i++)
        printf("%d",*(ptr+i));
    return 0;
}