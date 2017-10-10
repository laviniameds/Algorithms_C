#include <stdio.h>

int main(){

  int h, l, a, b, c;

  scanf("%d %d %d %d %d", &a, &b, &c, &h, &l);

  if((a <= h) && (b <= l))
    printf("S\n");
  else if((b <= l) && (c <= h))
    printf("S\n");
  else if((c <= h) && (a <= l))
    printf("S\n");
  else if((a <= l) && (b <= h))
    printf("S\n");
  else if((b <= h) && (c <= l))
    printf("S\n");
  else if((c <= l) && (a <= h))
    printf("S\n");
  else printf("N\n");

  return 0;
}
