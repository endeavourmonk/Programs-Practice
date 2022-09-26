#include<stdio.h>
int digit_counter(int num);
#define arr_size 10
int main(){
  int num,nod=0,i;
  printf("Enter number : ");
  scanf("%d",&num);
  nod=digit_counter(num);
  printf("no of digits = %d",nod);
  return 0;
}

int digit_counter(int num){
  int nod=0;
  for(;num!=0;nod++)
    num/=10;
  return nod;
}

void number_to_words(int num,int nod){
  int d,i,no;
  char str[199],dig[10];
  for(;num!=0;num/=10)
    no=10*no+(num%10);
  for(i=0;no!=0;no/=10,i++)
    str[i]=no%10;
  switch (num)
  {
  case 1:
    dig={"One"}
    break;
  
  default:
    break;
  }
  

}