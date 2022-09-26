// compute factors of a number..................

#include <stdio.h>
void compute_factor(int n){
	int d;
	for(d=1; d<=n; d++)
		if(n%d == 0)
			  printf("%d ", d);
}

int main(){
	int n;
	printf("Enter a Number : ");
	scanf("%d", &n);
	compute_factor(n);
	return 0;
}
