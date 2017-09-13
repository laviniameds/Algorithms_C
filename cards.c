#include <stdio.h>

int MDC(int x, int y){
  if(y == 0)
    return x;
  else
    return MDC(y, x%y);
}

int main(){
  int n, a, b;
  scanf("%d", &n);
  while(n != 0){
    scanf("%d%d", &a, &b);
    printf("%d\n", MDC(a, b));
    n--;
  }
  return 0;
}
