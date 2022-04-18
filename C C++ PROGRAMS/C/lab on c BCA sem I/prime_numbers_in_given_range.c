// Prime numbers in the given range
#include<stdio.h>
void main(){
    int sr, er, f = 1;
    printf("Enter starting and ending range : ");
    scanf("%d%d", &sr, &er);
    for(int i = sr; i <= er; i++, f = 1){
        for(int j = 2; j < i; j++)
            if(i % j == 0){
                f = 0;
                break;
            }
        if(f == 1)
            printf("%d ",i);
    }
}