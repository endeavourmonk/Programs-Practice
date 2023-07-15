#include<iostream>
using namespace std;
class A{
    private:
        int a;
    protected:
        int b;
    public:
        A(){cout<<"default constructor of A "<<endl;}
        ~A(){cout<<"destructor of A "<<endl;}
        void input(){
            cout<<"enter two values : "<<endl;
            
        }
        void show(){cout<<a<<b<<endl;}
};

class B:public A{
    private:
        int a1;
    protected:
        int b1;
    public:
        B(){cout<<"default constructor of B "<<endl;}
        ~B(){cout<<"destructor of B "<<endl;}
        void input(){
            cout<<"enter two values : "<<endl;
            cin>>a1;
        }
        void show1(){
            cout<<a1<<b1<<endl;
        }
};

int main(){
	B o2;
	o2.input();
	o2.show();
	
    return 0;
}
