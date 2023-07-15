#include<stdio.h>
#include<stdlib.h>

// function to find all beautifu numbers
// int beautiful_number_finder(int *ptr, int n, int *bflNums){
//     int k = 1;
//     *(bflNums) = *(ptr + (n-1));
//     for(int i = n-2; i >= 0; i--){
//         for(int j = i+1; j < n; j++){
//             if(*(ptr + i) < *(ptr + j) || *(ptr + i) == *(ptr + j ))
//                 break;
//             *(bflNums + k++) = *(ptr + i);
//         }
//     }
//     printf("returning value");
//     return k;
// }

// Driver Code
int main(){
    int n, t=1;
    int *arr, res[20];
    printf("Enter number : ");
    scanf("%d",&n);
    arr  = (int *)malloc(n * sizeof(int));
    printf("Enter %d numbers : \n",n);
    for(int i = 0; i < n; i++)
        scanf("%d",(arr + i));
        
    
    printf("array is :\n");
     for(int i = 0; i < n; i++)
        printf("%d  ",*(arr + i));

    res[0] = arr[n-1];
    
    for(int i = n-2; i >= 0; i--){
        for(int j = i+1; j < n; j++){
            if(arr[i] > arr[j]){
                res[t++] = arr[i];
                continue;
            }
            break;
        }
    }
    
    printf(" there are %d Beautiful Numbers ::\n\n",t-1);
    for(int i =0; i<t; i++)
        printf("%d  ",*(res + t));
    return 0;
}