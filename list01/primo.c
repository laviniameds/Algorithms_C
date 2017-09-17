#include <stdio.h>
int main(){
  int n = -1, i;
  int count = 0;
  scanf("%d" ,&n);
  for(i=1;i<n;i++)
    if(n%i == 0) count++;
  if(count == 1)
    printf("sim\n");
  else
    printf("nao\n");
  count = 0;
  return 0;
}
