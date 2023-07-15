#include<iostream>
using namespace std;

class Solution{
  public:
    long long int countDivisorsMult(int *arr, int n)
    {
      int pr=1,d;
      long long int ct=0;
      for(int i=0;i<n;i++)
        pr=pr* *(arr+i);
      for(d=1;d<=pr;d++)
        if(pr%d==0) 
            ct++;
      return ct;
    }
};
//Driver code
    int main(){
        int t;
        Solution *ptr;
        cout<<"enter no of times you want to run : "<<endl;
        cin>>t;
        while (t--){
            int n,i;
            cout<<"enter no of elements you want to store in array : "<<endl;
            cin>>n;
            cout<<"enter numbers in array"<<endl;
            int arr[50];
            for(i=0;i<n;i++)
                cin>>arr[i];
            ptr=new Solution;
            cout<<"\nCount of divisors of product of elements in array : "<<ptr->countDivisorsMult(arr,n)<<"\n";
            delete ptr;
        }
        return 0;   
    }