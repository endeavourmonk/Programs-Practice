/* clock example: frequency of primes */
#include <stdio.h>      /* printf */
#include <time.h>       /* clock_t, clock, CLOCKS_PER_SEC */
#include <math.h>       /* sqrt */
void arrange_in_ascending(int * ,int);
void show(int *,int);
// int frequency_of_primes (int n) {
//   int i,j;
//   int freq=n-1;
//   for (i=2; i<=n; ++i) for (j=sqrt(i);j>1;--j) if (i%j==0) {--freq; break;}
//   return freq;
// }

// int main ()
// {
//   clock_t t;
//   int f;
//   t = clock();
//   printf ("Calculating...\n");
//   f = frequency_of_primes (99999);
//   printf ("The number of primes lower than 100,000 is: %d\n",f);
//   t = clock() - t;
//   printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);
//   return 0;
// }
void arrange_in_ascending(int *at , int N){
    int i=0,j,temp;
    for(i=0 ; i<N-1 ;i++)
        for(j=i+1 ; j<N ;j++)
            if(*(at+i)>*(at+j)){
                //swapping elements
                temp=*(at+j);
                *(at+j)=*(at+i);
                *(at+i)=temp;
                i=-1;
                break;
            }
}
void show(int *arr,int n){
    for(int j=0 ;j<n ;j++)
        printf("| %d |\n",*(arr+j));
}
int main(){
    int ar[50],n;
    clock_t t,t1;
    scanf("%d",&n);
    t=clock();
    for(int i=0;i<n;i++)
        scanf("%d",&ar[i]);
      t = clock() - t;
   printf ("It took me %d clicks (%f seconds) to take input.\n",t,((float)t)/CLOCKS_PER_SEC);
   t1=clock();
   arrange_in_ascending(ar,n);
     //t1 = clock() - t1;
   //printf ("It took me %d clicks (%f seconds) to arrange given array.\n",t1,((float)t1)/CLOCKS_PER_SEC);
   printf("\n\n arranged array is  \n");
   show(ar,n);
   return 0;
}