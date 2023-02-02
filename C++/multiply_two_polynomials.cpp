#include<iostream>
#define arr_size 6
using namespace std;
//class polynomial
class polynomial{
    private:    //access specifier
        //attributes of polynomial
        int cof[arr_size];
        int no_terms;
    public :
        polynomial(){}      //constructor
        ~polynomial(){}     //destructor
        void input();       //function to input attributes
        void display();     //function to display content of polynomial
        void multiply_polynimials(polynomial *,polynomial *);       //function to multiply two polynomial
        // it takes addresses of three arrays(Ist polynomial,IInd polynomial and product array) and 
        //values of two terms as argument
};

void polynomial::input(){
    cout<<"\n\nenter number of terms of polynomial : "<<endl;
    cin>>no_terms;
    cout<<"enter coefficients of terms ||format is -- const , coe of x^1 , .... :"<<endl;
    for(int i=0;i<no_terms;i++) 
        cin>>cof[i];
}
void polynomial::display(){
    cout<<"\npolynomial is :::: "<<endl;
    for(int j=0;j<no_terms;j++)
        printf("%dx^%d ",cof[j],j);
}
void polynomial::multiply_polynimials(polynomial *pol1,polynomial *pol2){
    
}
//Driver code
int main(){
    polynomial p1,p2,pr;
    p1.input();
    p1.display();
    p2.input();
    p2.display();
    pr.multiply_polynimials(&p1,&p2);
    pr.display();
    return 0;
}