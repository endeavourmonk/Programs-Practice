//https://www.hackerrank.com/challenges/frequency-of-digits-1/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define z 0
#define z1 z,z,z
#define z2 z1,z1,z1
int main() {
    char s[50] ;
    int freq[]={z2,z};
    int i;
    scanf("%s",s);
    for(i=0;i<strlen(s);i++){
        if(s[i]=='0')
            freq[0]+=1;
        else if(s[i]=='1')
            freq[1]+=1;
        else if(s[i]=='2')
            freq[2]+=1;
        else if(s[i]=='3')
            freq[3]+=1;
        else if(s[i]=='4')
            freq[4]+=1;
        else if(s[i]=='5')
            freq[5]+=1;
        else if(s[i]=='6')
            freq[6]+=1;
        else if(s[i]=='7')
            freq[7]++;
        else if(s[i]=='8')
            freq[8]+=1;
        else if(s[i]=='9')
            freq[9]+=1;
    }
        for(int i=0;i<10;i++)
            printf("%d ",freq[i]);
    return 0;
}
