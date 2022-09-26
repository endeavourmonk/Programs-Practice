#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));  //srand takes seed as an input and is defined in stdlib.h.
    printf("The random number between 0 and 100 is %d",rand()%100);
    return 0;
}