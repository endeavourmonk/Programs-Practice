#include <stdio.h>
#include <string.h>
// int main() {
// /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
//     int ocu[] = {0,0,0,0,0,0,0,0,0,0} ,len ,j, i;
//     // int num[] = 
//     char str[20];
//     scanf("%s",str);
//     len = strlen(str);
//     for(i=48 ; i<58 ; i++){
//         for(j=0 ;j<len ; j++){
//             if(str[j] == i)
//                 ocu[i]+=1;
//         }
//     }
//     for(i=0 ; i< 10 ; i++)
//         printf("%d ",ocu[i]);
//     return 0;
// }

int main(){
    char s[100];
    int i, f, j;
    scanf("%s",s);
    for(i=48;i<58;i++){ 
        for(j=0, f=0;j<strlen(s);j++)
            if(s[j]==i)
                f++;
        printf("%d ",f);
    }
   return 0;
}