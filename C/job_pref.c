#include <stdio.h>

int main(void) {
	// your code goes here
	char p3, p1, p2, c1, c2;     // P is the preference and c is for company.
	int i, t, k=0;
	char ch[4];
	scanf("%d", &t);
	for(i = 0; i < t; i++){
	    scanf(" %c %c %c", &p1, &p2, &p3);
	    scanf(" %c %c", &c1, &c2);
	    if(p1 == c1)
	        ch[k++] = c1;
	    else if(p1 == c2)
	        ch[k++] = c2;
	    else if(p2 == c1)
	        ch[k++] = c1;
	    else if(p2 == c2)
	        ch[k++] = c2;
	    else if(p3 == c1)
	        ch[k++] = c1;
	    else if(p3 == c2)
	        ch[k++] = c2;
	}
	for(i = 0; i < t; i++)
		printf("%c\n", ch[i]);
	return 0;
}

