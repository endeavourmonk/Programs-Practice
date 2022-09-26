#include<stdio.h>
int nth_term_generator(int N);
int term_finder(int N);
long long findNthNumber(long long N);
int main(){
  int N,term;
  printf("enter number of terms : ");
  scanf("%d",&N);
  //term=term_finder(N);
  //term=nth_term_generator(N);
  term=findNthNumber(N);
  printf("nth term excluding 9 is : %d",term);
  return 0;
}
int nth_term_generator(int N){
  int i,ct=0,nth;
  for(i=1;i<=N;i++){
    if(i%10==9)
      ct++;
  }
  nth=N+ct;
  if(nth%10==9)
    nth+=1;
  return  nth;
}

int term_finder(int N){
  int i=1,tn=1;
  for(i=1;tn<=N;i++,tn++)
      if(i%10==9)
        i++;
  return i-1;
}

/*
Efficient Approach: The above approach can be optimized based on the following observations: 

    It is known that, digits of base 2 numbers varies from 0 to 1. Similarly, digits of base 10
    numbers varies from 0 to 9.
    Therefore, the digits of base 9 numbers will vary from 0 to 8.
    It can be observed that Nth number in base 9 is equal to Nth number after skipping numbers containing
    digit 9.
    So the task is reduced to find the base 9 equivalent of the number N.


Follow the steps below to solve the problem:

    Initialize two variables, say res = 0 and p = 1, to store the number in base 9 and to store the
    position of a digit.
    Iterate while N is greater than 0 and perform the following operations:
        Update res as res = res + p*(N%9).
        Divide N by 9 and multiply p by 10.
    After completing the above steps, print the value of res.


Below is the implementation of the above approach:
    
*/

// Function to find Nth number in base 9
long long findNthNumber(long long N){
    // Stores the Nth number
    long long result = 0;
    long long p = 1;
    // Iterate while N is greater than 0
    while (N > 0) {
        // Update result
        result += (p * (N % 9));
        // Divide N by 9
        N = N / 9;
        // Multiply p by 10
        p = p * 10;
    }
    // Return result
    return result;
}