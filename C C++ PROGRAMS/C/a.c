#include<stdio.h>
int main(){
	int n;
	char str[20];
	scanf("%s",str);
	for(n=0;str[n];n++);
	printf("length = %d",n);
	return 0;
}
