#include<stdio.h>
int main(){
    int a=2,b=3;
    float c=7;
    printf("ARITHMETIC OPERATORS\n");
    printf("a+b = %d\n",a+b);
    printf("a-b = %d\n",a-b);
    printf("a*b = %d\n",a*b);
    printf("a/b = %d\n",a/b);
    printf("a%b = %d\n\a",a%b);
    printf("\n...................................................\n");
    printf("RALATIONAL OPERATORS\n");
    printf("a==b = %d\n",a==b);
    printf("a!=b = %d\n",a!=b);
    printf("a>b = %d\n",a>b);
    printf("a<b = %d\n",a<b);
    printf("a>=b = %d\n",a>=b);
    printf("a<=b = %d\n",a<=b);
    printf("\n...................................................\n");
    printf("LOGICAL OPERATORS\n");
    printf("a&&b = %d\n",a&&b);
    printf("a||b = %d\n",a||b);
    printf("!(a==b) = %d\n",!(a==b));
    printf("...................................................\n");
    printf("BITWISE OPERATORS\n");
    printf("a^b = %d\n",a^b);
    printf("a|b = %d\n",a|b);
    printf("a&b = %d\n",a&b);
    printf("a<<b = %d\n",a<<b);
    printf("a>>b = %d\n",a>>b);
    printf("\n...................................................\n");
    printf("SIZE OF a is %d\n",sizeof(a));          //give the size of variable
    printf("ADDRESS OF a is %u\n\a",&a);
    printf("ADDRESS OF b is %u\n",&b);              //address operator
    printf("the value of c is  %d\n", (int)c);      //typecasting 
    printf("value of c is %88.2f v\n",c);           //print c in 88 characters with 2 decimal points
    printf("b/a is %f\n",(float)b/a);  
    return 0;   
}