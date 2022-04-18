#include<stdio.h>

class Number
{
    public:
    int value;
    Number(){                                      //default constructor.....
        printf("default\n");
    }

    Number(int s){                                 //one argument constructor.....
        value=s;
        printf("one argument \n");
    }

    Number operator++();
    Number operator++(int);
    Number operator+(Number t);
};

int main(){
    Number n1(5),n2(10),n3;
    //n1.operator++();
    //n2.operator++();


    n3=  ++n1 + (n2++);
    
    printf("SUM IS %d",n3.value);
    return 0;
}

Number Number:: operator++(){
   return Number(++value);
}

 Number Number :: operator++(int){
     Number t(value);
     value++;
     return (t);
 }

Number Number :: operator+(Number t){
    return value+t.value;
}