#include<iostream>
using namespace std;
class number{
    public:
            int value;                          //attribute...
    public :
            number(){};    //default constructor..
            number(int a){}  //one argument constructor...
            number(int a,int b){} //two argument constructor...
            ~number(){}  //destructor... 

            void get_value();
            int permutations(int);
            int combinations(int);
            int factorial(int);

};

void number :: get_value(){
    cin>>value;
}

int number :: permutations(int r){
    int a=factorial(value);
    int b=factorial(value-r);
    return a/b;
}

int number :: combinations(int r){
    int per=permutations(value);
    int f=factorial(r);
    return per/f;
}

int number :: factorial(int n){
    int i=n,fac=1;
    while (i>0){
        fac*=i;
        i--;
    }
    return fac;
}

int main(){
    number n,r;
    cout<<"enter value of n and r :"<<endl;
    n.get_value();
    r.get_value();
    int per=n.permutations(r.value);
    cout<<"permutation = "<<per;
    return 0;
}