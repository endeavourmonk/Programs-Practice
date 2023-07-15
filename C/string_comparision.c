/*Bob's crush's name starts with a vowel.
 That's the reason Bob loves vowels too much. 
 He calls a string "lovely string" if it contains either all the lowercase 
 vowels or all the uppercase vowels or both, else he calls that string "ugly string". 

For more clarification, see the sample testcase explanation.

Input :::::::

First line contains T, the number of test cases.
Next T lines contain a single string S.

Output:::::::

For each test case, print "lovely string" or "ugly string"(without quotes)  according to the definition of Bob.

Constraints

string contains only lowercase and uppercase Latin letters. 
--------------------
Sample Input       |
omahgoTuRuLob      |
OmAhgotUrulobEI    |
aeKORONAoiBATCHu   |
--------------------
---------------
Sample Output  |
ugly string    |
lovely string  |
lovely string  |
---------------
Time Limit: 1
Memory Limit: 256
Source Limit:

Explanation
In first string, neither all five lowercase vowels are present nor all five uppercase vowels.

In second string, all five uppercase vowels are present.

In third string ,  all five lowercase vowels are present.
*/
#include<stdio.h>
#define str_size 19
int main(){
	char str[str_size];
	int no,ct=0,ct1=0,v1,i;
	char vow[]={'a','e','i','o','u'};
	char vowC[]={'A','E','I','O','U'};
	printf("/////////////////////////");
	scanf("%s",&str);
	for(v1=0;v1<5;v1++){
		for(i=0;str[i]!='\0';i++){
			if(vow[v1]==str[i]){
				ct++;
				break;
			}
		}
		for(i=0;str[i]!='\0';i++){
			if(vowC[v1]==str[i]){
				ct++;
				break;
			}
		}
	if(ct>4||ct1>4)
		printf("lovely string");
	else
		printf("ugly string");
	return 0;
}
