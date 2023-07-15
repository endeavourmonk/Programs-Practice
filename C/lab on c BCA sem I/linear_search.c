// search specific element in array.
#include<stdio.h>
void main(){
    int arr[10], i, ele;
    printf("Enter elements in array :\n");
    for(i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    printf("\n\nEnter element you want to search in array : ");
    scanf("%d", &ele);
    for(i = 0; i < 10; i++)
        if(arr[i] == ele){
            printf("%d found on %dth index.",ele,i);
            return;
        }
    printf("%d is not present in array.",ele);
}