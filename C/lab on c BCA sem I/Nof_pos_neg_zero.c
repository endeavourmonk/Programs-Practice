// Number of positive, Negative and zeros in array
#include<stdio.h>
void main(){
    int arr[10], i, p = 0, n = 0, z = 0;
    printf("Enter elements in array :\n");
    for(i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    for(i = 0; i < 10; i++){
        if(arr[i] < 0)
            n++;
        if(arr[i] > 0)
            p++;
        if(arr[i] == 0)
            z++;
    }
    printf("Negative = %d\nPositive = %d\nZero = %d", n,p,z) ;
}       