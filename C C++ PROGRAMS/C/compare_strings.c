#include<stdio.h>
#include"mystring.h"
#define size 1000
int compare_strings(char *s1,char *s2);
int length(char str[]);
//Driver code
int main(){
    char str1[size],str2[size];
    int status;
    printf("enter string I : ");
    fgets(str1,size,stdin);
    printf("string I is   ");
    puts(str1);
    printf("enter string II :");
    fgets(str2,size,stdin);
    printf("string II is   ");
    puts(str2);
    printf("\nlength of string I is %d :\n",length(str1));
    printf("\nlength of string II is %d :\n",length(str2));
    status=compare_strings(&str1[0],&str2[0]);
    if (status==1)
        printf("\nstrings are same\n");
    else
        printf("\nstrings are not same\n");
    return 0;
}