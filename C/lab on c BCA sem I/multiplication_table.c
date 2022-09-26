//  Display multiplication table from 1 - 10 except 3 and 5.
#include<stdio.h>
void main(){
    int i, j;
    for(i = 1; i <= 10; i++){
        if(i == 3 || i == 5)
            continue;
        printf("\nMultiplication Table of %d\n",i);
        for(j = 1; j <= 10; j++)
            printf("%d\n", i * j);
    }
}