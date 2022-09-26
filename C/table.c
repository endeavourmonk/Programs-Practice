#include<stdio.h>
#include<stdlib.h>
void multiply(int * , int);
void print_arr(int *,int);
//Driver Code
int main(){
    int i,no_t;
    int *arr;
    int table[10];
    printf("Enter number of tables you want to print :");
    scanf("%d",&no_t);
    arr = (int*)malloc(no_t * sizeof(int));
    if(arr == NULL){
        printf("Memory not allocated that's why terminating program.");
        exit(0);
    }
    for(i=0 ; i<no_t ; i++){
        printf("Enter number :");
        scanf("%d",(arr+i));
        multiply(table,*(arr+i));
        print_arr(table,*(arr+i));
    }
    free(arr);
    return 0;
}
//function to generate multiplication table
void multiply(int *table , int num ){
    for(int ind=1 ; ind<=10 ; ind++)
        *(table + (ind-1)) = ind * num;
}
//function to print table
void print_arr(int *arr , int no){
    printf("\n\nTable of %d :\n\n",no);
    for(int j=0 ; j<10 ; j++)
        printf("%d X %d = %d\n",no,(j+1),arr[j]);
}