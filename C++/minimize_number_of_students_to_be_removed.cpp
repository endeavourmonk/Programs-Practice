/*
In an assembly there are N students in a line and their height stored in H[N]. You need to remove minimum
number of students so that all the students see the assembly properly. If a student of height greater than
or equal is standing in front of any student he will not see forward.

Example 1.   :
    Input     t=1 , N=6 , H[N] = {9,1,2,3,1,5}
    Output    2

Example 2.    :
   Input     t=1 , N=3 ,H[N] = {1,2,3}
    Output    0 (No student need to be removed from line) 

::::::::::::::::::::::::::::::::::::::::::::::SOLUTION::::::::::::::::::::::::::::::::::::::::::::::::::::::

In order to solve the given problem we will find the length of longest increasing subsequence .
Minimum number of students need to be removed = N - (length of longest increasing subsequence)
----------------------------------------------------------------------------------------------------------------
(Subsequence of a string is the string obtained by deleting some elements of parent string without changing order.)
(Sub-array is a contiguous part of array.An array that is inside another array. )
*/

#include<iostream>
#define arr_size 10
#define v1 1
#define v2 v1,v1
#define v4 v2,v2
#define v8 v4,v4
using namespace std;

class Solution {
  public:
    int largest_finder(int A[],int n);
    int removeStudents(int H[],int N);
    void assigner(int ar[],int temp_ar[],int j,int);
};

int Solution :: removeStudents(int H[],int N){
    int LIS[arr_size]={v8,v2},i;
    int TIS[arr_size],k=0;
    for(i=0;i<N;i++){
        for(int j=i-1,k=0;j>=0;j--){
            if(H[i]>H[j]){
                TIS[k++]=LIS[j];
            }
        }
        if(k!=0)
            LIS[i]=largest_finder(TIS,k);
    }
    int lis=largest_finder(LIS,i);
    return N-lis;
}

int Solution :: largest_finder(int A[],int n){
    int lar=A[0];
    for(int j=0; j<n; j++)
        if(A[j]>lar)
            lar=A[j];
    return lar;
}
void assigner(int ar[],int temp_ar[],int j,int){
    
}

//Driver code
int main(){
    int t;                          //number of test cases
    cout<<"Enter number of lines : ";
    cin>>t;
    while(t--){
        int N;                      //Number of students
        cout<<"Enter number of students standing in line : ";
        cin>>N;
        int H[arr_size];            //Array to store height of students
        cout<<"Enter Heights of student in line : "<<endl;
        for(int i=0;i<N;i++)
            cin>>H[i];
        Solution ob;
        int num=ob.removeStudents(H,N);
        cout<<"no of students need to remove = "<<num<<endl;
    }
    return 0;
}