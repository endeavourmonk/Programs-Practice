#include<stdio.h>
void func1(int arr[],int N){
    printf("value at 0th index is %d\n",arr[0]);
    printf("value at 0th index is %d\n",*(arr));
    printf("value at index 1 is %d\n",arr[1]);
    printf("value at index 1 is %d\n",*(arr+1));
    arr[0]=77;
    printf("value at 0th index is %d\n",arr[0]);
    printf("value at 0th index is %d\n",*(arr));
}
int main(){
    int array[5];
    printf("enter elements in array : \n");
    for(int i=0; i<5; i++)
        scanf("%d",&array[i]);
    func1(array,5);
    return 0;
}
