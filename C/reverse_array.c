#include<stdio.h>
#define arr_size 100
void enter_elements_in_array(int,int *);
void print_elements_of_array(int,int *);

int main(){
    int arr1[arr_size],arr2[arr_size];
    int n,i,j;
    printf("enter total number of elements you want to enter : ");
    scanf("%d",&n);
    printf("enter elements : \n");
    enter_elements_in_array(n,arr1);
    printf("FIRST ARRAY IS \n");
    print_elements_of_array(n,arr1);
   // printf("\n\nREVERSED ARRAY IS \n");
   // print_elements_of_array(n,arr2);
    return 0;
}

void enter_elements_in_array(int n,int *a){
    int index;
    for( index=0;index<n;index++){
         scanf("%d ",(a+index));	
         pritnf("%d .... ",index);
    }
        
}

void print_elements_of_array(int n,int *a){
    int index;
    for(index=0;index<n;index++)
        printf("%d ",*(a+index));
}
void reverse_array(int n,int *a1,int*a2){
    int i,j;
    for(i=0,j=n-1;j>=0;i++,j--)
        *(a2+i)=*(a1+j);
}
