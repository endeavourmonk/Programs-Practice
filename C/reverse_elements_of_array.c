#include <stdio.h>
#define arr_size 20
void enter_elements_in_array(int n,int *a);
void print_elements_of_array(int n,int *a);
void reverse_array(int n,int *a1,int*a2);
int main(){
    int arr1[arr_size],arr2[arr_size];
    int n;
    printf("enter number of elements you want to enter : ");
    scanf("%d",&n);
    printf("\nenter elements in array I\n");
    enter_elements_in_array(n,&arr1[0]);
    printf("\n\n Array I is :::::::::\n");
    print_elements_of_array(n,&arr1[0]);
    reverse_array(n,arr1,arr2);
    printf("\n\nREVERSED ARRAY IS ::::::::\n");
    print_elements_of_array(n,arr2);
    return 0;
}
void enter_elements_in_array(int p,int *a){
    int i=0;
    while(i<p)
        scanf("%d",(a+i++));
}
void print_elements_of_array(int n,int *a){
    int index=0;
    while(index<n)
        printf("%d|",*(a+index++));
}
void reverse_array(int n,int *a1,int*a2){
    int i,j;
    for(i=0,j=n-1;j>=0;i++,j--)
        *(a2+i)=*(a1+j);
}