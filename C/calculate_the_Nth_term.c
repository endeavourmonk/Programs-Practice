#include <stdio.h>
int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  int num=3 , sum;
  sum = a+ b +c;
  num++;
  if(num == n){
      return sum;
  }
      num++;
      return sum = find_nth_term(n,b,c,sum);
}

int main() {
    int n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
    printf("%d", ans); 
    return 0;
}