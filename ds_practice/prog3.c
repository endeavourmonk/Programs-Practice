#include<stdio.h>
int main(){
    int a1[] = {1,2,3,4,5,99};
    int a2[] = {6,7,8,9,10};
    int *a[2];
    a[0] = a1;
    *(a+1) = a2;
    int i,j;
    for (i=0 ; i < sizeof(a)/sizeof(int) ; i++){
        for(j=0 ; j < sizeof(a1)/sizeof(int) ; j++){
            printf("%d ",*(*(a+i)+j));
        }
        printf("\n");
    }
    return 0;
}