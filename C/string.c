#include<stdio.h>
void strrevud(char * str , char* rev_str ){
    int i=0,j=0;
    while(str[i]!='\0')
        i++;
    for(j=0 ; j<=i ;j++)
        *(rev_str + j) = *(str + (i-j));
    }
int main(){
    char a[50],b[60];
    gets(a);
    strrevud(a,b);
    puts(b);
    printf("\n Reversed string is ");
    puts(b);
    return 0;
}
