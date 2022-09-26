//https://www.codechef.com/SDPCB21/submit/TEMPLELA

#include <stdio.h>

int main(void) {
	// your code goes here
	int s, n[15], h[15][15], ans[15];
	scanf("%d",&s);
	for(int i=0; i<s; i++){
	    scanf("%d",&n[i]);
	    for(int j=0; j<n[i]; j++){
	        scanf("%d",&h[i][j]);
	    }
	}
	
	for(int i=0; i<s; i++){
	    for(int j=0; j<n[i]; j++){
            if(n[i]%2 != 0){
                if(h[i][0] == 1){
                    // checking increasing order
                    for(int k=0; k<(n[i]/2); k++){
                        if(h[i][k] == (h[i][k+1] + 1))
                            ans[i] = 1;
                        else
                            ans[i]=0;
                    }
                    // checking decreasing order
                    for(int k=n[i]/2; k<n[i]-1; k++){
                        if(h[i][k] == (h[i][k+1] - 1))
                            ans[i] = 1;
                        else
                            ans[i]=0;
                    }
                }
            }
        }
	}
	
	for(int v=0; v<s; v++){
	    if(ans[v] == 1)
	        printf("yes\n");
	   else
	        printf("no\n");
	}
	return 0;
}

