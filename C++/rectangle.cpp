#include<iostream>

class rectangle
{
    int l,b;            // attributes

    public:             // Access Specifier
            rectangle(){l=b=0;printf("creation\n");}         // default constructor
            rectangle(int s){l=this->b=s;printf("1 argument \n");}      // one argument constructor 
            rectangle(int l,int b)              // two argument constructor
            {
                this->l=l;
                this->b=b;
                printf("2 argument\n");
            }            
            rectangle(rectangle &r)             //copy constructor
            {
                l=r.l;
                b=r.b;
                printf("copy constructor\n");
            }
            ~rectangle(){printf("@@@@@\n");};                     // destructor

};

int main()
{
    rectangle r1(5,3);
    rectangle r2(5);
    rectangle r3;
    rectangle r4=r1;
    return 0;
}