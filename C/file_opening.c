#include<stdio.h>
int main(){
    FILE *fptr = NULL;
    char str[90];
    char c;
    fptr = fopen("myFile.txt","a");
    // fscanf(fptr,"%s",str);
    // printf("The content of myFile is\n");
    // puts(str);
    // c = fgetc(fptr);
    // printf("The character read by me : %c\n",c);
    //  c = fgetc(fptr);
    // printf("The character read by me : %c",c);
    // fclose(fptr);

    // fgets(str,5,fptr);
    // printf("string I read : %s",str);

    fputc('O',fptr);
    fputs("Welcome ji.",fptr);
    return 0;
}