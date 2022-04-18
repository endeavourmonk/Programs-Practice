#include<stdio.h>
void slice_string(char *arr , int n , int n1){
    for(int i=n ; i<=n1 ; i++)
        printf("%c",arr[i]);
    printf("%c",*arr);
}
int main(){
    int a,b;
    char str[20];
    puts("ENter string :\n");
    gets(str);
    printf("enter range for slicing");
    scanf("%d%d",&a,&b);
    slice_string(str,a,b);
    return 0;
}
