#include<iostream>
using namespace std;
class number{
    private:
        int value;
    public:
        number(){ }  //constructor...
        void get_number();
        long factorial_calculator();
};
//accepting number ...
void number :: get_number(){
    cout<<"Enter number : "<<endl;
    cin>>value;
}
//calculating factorial.....
long number :: factorial_calculator(){
    int n;
    long fact=1;
    for(n=value ;n>0; n--)
        fact *= n;
    return fact;
}
//Driver function
int main(){
    number a;
    long f;
    a.get_number();
    f=a.factorial_calculator();
    cout<<"factorial is "<<f;
    return 0;
}