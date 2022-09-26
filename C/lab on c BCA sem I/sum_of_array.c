/// Print sum of 10 elements in array
#include<stdio.h>
void main(){
    int arr[10], i, sum = 0;
    printf("Enter elements in array :\n");
    for(i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    for(i = 0; i < 10; i++)
        sum += arr[i];
    printf("Sum of elements in array = %d", sum);
}       