#include<iostream>
using namespace std;

struct Vector{
    int sz;
    double *elem;
};

void Vector_init(Vector &v, int s){
    v.elem = new double[s];
    v.sz = s;
}

double read_and_sum(Vector &v1){
    for(int i = 0; i < v1.sz; i++)
        cin >> v1.elem[i];
    
    double sum = 0; 
    for(int i = 0; i < v1.sz; i++)
        sum += v1.elem[i];
    return sum;
}

int main(){
    Vector myVector;
    Vector_init(myVector, 5);
    double sum = read_and_sum(myVector);
    cout << "sum : " << sum;
    return 0;    
}