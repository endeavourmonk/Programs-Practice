#include<stdio.h>

int main(int argc, char const *argv[])
{
    float result;
    if(argv[1] == "sum")
        printf("sum = %d",(int)argv[1] + (int)argv[2]);
    return 0;
}