#include<stdio.h>
int main(){
    char c;
    FILE *f;
    f=fopen("helloworld111.txt","r");
    while(1){
        c=fgetc(f);
        if(c==EOF)
            break;
        printf("%c",c);
    }
    printf("\n\n");
    fclose(f);
    return 0;
}
