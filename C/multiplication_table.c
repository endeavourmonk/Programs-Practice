#include<stdio.h>
#include<stdlib.h>
void table_printer(int, int , int);
int main(){
    int tab_len,num;
    printf("Enter number you want to get whose table : ");
    scanf("%d",&num);
    printf("enter length of table you want to print : ");
    scanf("%d",&tab_len);
    table_printer(tab_len,num,1);
    return 0;
}
/*
void table_printer(int tab_len , int num){
    for (int i=1;i<=tab_len;i++)
        printf("%d X %d = %d\n",num,i,num*i);    
}
*/
//Recursive function
void table_printer(int tab_len , int num,int i){
    printf("%d X %d = %d\n",num,i,num*i);
    if(i==tab_len)    
        goto end;
    table_printer(tab_len,num,++i);
    end:
    printf("ending...");
   // exit(0);
}
