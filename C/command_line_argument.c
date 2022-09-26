#include<stdio.h>
int main(int argc, char const *argv[]){
    int i ;
    printf("The value of argc is %d\n",argc);
    for(i = 0 ; i < argc ; i++){
        printf("The value at index %d is %s\n",i, argv[i]);
    }
    return 0;
}
