// Minimum and maximum element in array
#include<stdio.h>
void main(){
    int arr[10], i, min, max;
    printf("Enter elements in array :\n");
    for(i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    min = arr[0];
    max = arr[0];
    for(i = 0; i < 10; i++){
        if(min > arr[i])
            min = arr[i];
        if(max < arr[i])
            max = arr[i];
    }
    printf("Minimum = %d\nMaximum = %d", min, max);
}       