#include <stdio.h>
#include <conio.h>
int main()
{
      int  a,b,sum;
      char *p;
      printf("Enter 2 values : ");
      scanf("%d%d",&a,&b);
      p = (char *)a; // Using pointers
      sum = (int)&p[b];
      printf("sum = %d",sum);
      getch(); 
      return 0;
}