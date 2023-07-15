#include<stdio.h>
#include<string.h>
//creating new datatype
typedef struct   {
    char name[20];
    int age;
    float salary;
    int no_days_worked;
}employee;
int main(){
    employee e1,e2;     
    puts("Enter name of employee 1 : ");
    gets(e1.name);
    printf("Name : ");
    puts(e1.name);
    printf("length is %d",strlen(e1.name));
    printf("Enter age of employee 1 :");
    scanf("%d",&e1.age);
    printf("age = %d",e1.age);
    return 0;
}