/*Absolute difference divisible by K
   Given an array of integers of size n, and an integer k. Find all the pairs in the array whose
   absolute difference is divisible by k.

   Example 1:       Input:n = 3
                    arr[] = {3, 7, 11}
                    k = 4
                    Output:
                    3
                    Explanation:
                    (11-3) = 8 is divisible by 4
                    (11-7) = 4 is divisible by 4
                    (7-3) = 4 is divisible by 4 
        
    Example 2:      Input:n = 4
                    arr[] = {1, 2, 3, 4}
                    k = 2
                    Output :
                    2
                    Explanation:
                    Valid pairs are (1,3), and (2,4).
    */

#include <stdio.h>
void input_elements(int arr[],int n);
int number_of_required_pairs(int arr[] , int n ,int k);
int main(){
    int n,k,nop;
    int arr[10];
    printf("Enter number of elements to store : ");
    scanf("%d",&n);
    printf("Enter value of k : ");
    scanf("%d",&k);
    input_elements(arr,n);
    nop=number_of_required_pairs(arr,n,k);
    printf("Required number of pairs = %d",nop);
    return 0;
}

void input_elements(int arr[] , int n ){
    printf("Enter %d numbers",n);
    for(int j=0 ;j<n ;j++)
        scanf("%d",&arr[j]);
}

int number_of_required_pairs(int arr[] , int n ,int k){
    int i,j,count=0;
    for(i=n-1 ; i>0 ; i--){
        for(j=i-1 ; j>=0 ;j--)
            if((arr[i]-arr[j])%k == 0)
                count++;
    }
    return count;
}