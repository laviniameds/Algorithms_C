#include <stdio.h>

void binario(int n){
  int i, j = 0;
  char bin[32] = {0};
  while(n != 0){
    if(n%2 == 0) bin[j] = '0';
    else bin[j] = '1';
    n = n/2;
    j++;
  }
  for(i=j-1; i>=0; i--){
   printf("%c", bin[i]);
  }
}

int paridade(int n){
  int count = 0;
  while(n != 0){
    if(n%2 == 1)
      count++;
    n = n/2;
  }
  return count;
}

int main(){
  int l;
  scanf("%d", &l);
  while(l != 0){
    if(l >= 1 && l <= 2147483647){
      printf("The parity of ");
      binario(l);
      printf(" is %d (mod 2).\n", paridade(l));
      scanf("%d", &l);
    }
    else break;
  }
  return 0;
}
