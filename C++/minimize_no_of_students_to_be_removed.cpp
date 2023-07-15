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
using namespace std;

class Solution {
  public:
    //int removeStudents(int,int);
    int removeStudents(int H[],int N){
        int i,j,ct=1;
        int no_subs[10];
        for(i=1;i<N;i++){
            for(j=i-1;j>=0;j--){
                if(H[j]<H[i]);
                    ct++;
            }
            no_subs[i-1]=ct;
            ct=1;
        }
    cout<<"no of subsequences increasind order is "<<endl;
    for(int ind=0;ind<i,ind++;)
        cout<<no_subs[ind];

        int no_longest_subs=no_subs[0];
        for(int ind=0;ind<N,i++;){
            if(no_longest_subs<no_subs[ind])
                no_longest_subs = no_subs[ind];
        }
        //cout<<"longest ="<<no_longest_subs<<endl;
        return N-no_longest_subs;
}

};

//Driver code
int main(){
    int t;                          //number of test cases
    cout<<"Enter number of lines : ";
    cin>>t;
    while(t--){
        int N;                      //Number of students
        cout<<"Enter number of students standing in line : ";
        cin>>N;
        int H[N];            //Array to store height of students
        cout<<"Enter Heights of student in line : "<<endl;
        for(int i=0;i<N;i++)
            cin>>H[N];

        Solution ob;
        int num=ob.removeStudents(H,N);
        cout<<"no of students need to remove = "<<num<<endl;
    }
    return 0;
}
