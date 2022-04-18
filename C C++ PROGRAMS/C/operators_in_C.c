#include<stdio.h>
int main(){
    int a=0,b=3;
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
    printf("SIZE OF a is %d\n",sizeof(a));
    printf("ADDRESS OF a is %u\n\a",&a);
    printf("ADDRESS OF b is %u\n",&b);
    return 0;
}
