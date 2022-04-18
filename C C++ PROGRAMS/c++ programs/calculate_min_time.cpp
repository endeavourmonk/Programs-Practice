#include<iostream>
using namespace std;
int time_calculator(int ,int *,int );
//Driver code
int main(){
    int N,RN,i;
    int arr[N];
    cin>>N;
    cin>>RN;
    for(i=0; i<N ; i++)
        cin>>arr[i];
    int time=time_calculator(N,arr,RN);
    cout<<"time required= "<<time<<" sec";
    return 0;
}
//it returns RN - smallest element in array.
int time_calculator(int n,int * s,int rn){
    int sm=*s;    //smallest element
    for(int i=0;i<n;i++)
        if(sm>*(s+i)){
            int t=sm;
            sm=*(s+i);
            *(s+i)=t;
        }
    return rn-sm;
}
