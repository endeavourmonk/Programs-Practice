#include<stdio.h>
int main(){
  char name[30], num[11], v = 'd';
  FILE *fptr;
  fptr = fopen("contact.txt","a");
  while(1){
      printf("\n______________________________________________________\n");
    printf("Enter name of reciepent : ");
    fgets(name,30,stdin);
    printf("\nEnter contact number : ");
    fgets(num,10,stdin);
    fprintf(fptr,"\n");
    fputs(name,fptr);
    fprintf(fptr,"\t-->\t");
    fputs(num,fptr);
    printf("\nPress any key to continue or ';' to save : ");
    v = getchar();
    v = getchar();
    if(v == ';'){
        printf("\nsaving...");
        break;
    }
  }
  fclose(fptr);
  return 0;
}