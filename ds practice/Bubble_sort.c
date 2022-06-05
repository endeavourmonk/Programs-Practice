// 23.08.2021
// Bubble sort
#include<stdio.h>
#define arr_size 9999
void swap(int *n, int *n1);
void bubble_sort(int *arr, int n);

// Driver Code
int main(){
    int arr[arr_size], i;
    printf("Entering numbers in array.\n\n");
    for(i=0; i<arr_size; i++)
        arr[i] = (arr_size - i);
    printf("Array is : \n\n");
    for(i=0; i<arr_size; i++)
        printf("%d, ",arr[i]);
    printf("\n\n\n SORTING ARRAY.....\n\n");
    bubble_sort(arr, arr_size);
    for(i=0; i<arr_size; i++)
        printf("%d, ",arr[i]);
    return 0;
}

// Sorting array by bubble sort algorithm.
void bubble_sort(int *arr, int n){
    for(int i = 0; i < n-1; i++)
        for(int j = 0; j < n-1-i; j++){
            if(arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
        }
}

// function to swap two numbers.
void swap(int *n, int *n1){
    int temp = *n1;
    *n1 = *n;
    *n = temp;
}