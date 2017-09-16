#include <stdio.h>

unsigned int int_to_int(unsigned int k) {
    if (k == 0) return 0;
    if (k == 1) return 1;
    return (k % 2) + 10 * int_to_int(k / 2);
}

unsigned int paridade(unsigned int n){
  int count = 0;
  while(n != 0){
    if(n%2 == 1)
      count++;
    n = n/2;
  }
  return count;
}

int main(){
  unsigned int l;
  scanf("%d", &l);
  while(l != 0 && l <=2147483647){
    printf("The parity of %u is %u (mod 2).\n",int_to_int(l) ,paridade(l));
    scanf("%d", &l);
  }
  return 0;
}
