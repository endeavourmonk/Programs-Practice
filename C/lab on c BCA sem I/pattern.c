#include<stdio.h>
void main(){
    int i, j, k;
    for(i = 1; i <= 4; i++){
        for(j = 1; j <= i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
}       