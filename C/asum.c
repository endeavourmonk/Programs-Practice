// #include<stdio.h>
// int main(){
//     int a[129];
//     int sum=0;
//     printf("jdfjja :");
//     for(int j=0;j<34;j++)
//         scanf("%d",&a[j]);
//     for(int i=0;i<34;i++)
//         sum+=a[i]   ;
//     printf("sum is %d :",sum);
//     return 0;
// }
#include <stdio.h>
#include <time.h>
int main(void)
{
    struct tm* ptr;
    time_t lt;
    lt = time(NULL);
    ptr = localtime(&lt);
    printf("%s", asctime(ptr));
    return 0;
}