#include <stdio.h>
int main(){
  int x, y, l1, h1, l2, h2;
  scanf("%d%d", &x, &y);
  scanf("%d%d", &l1, &h1);
  scanf("%d%d", &l2, &h2);
  if(l1 <= x && l2 <= x){
    if((h1 + h2) <= y)
      printf("S\n");
    else printf("N\n");
  }
  else if (l1 <= x && h2 <= x){
    if((h1 + l2) <= y)
      printf("S\n");
    else printf("N\n");
  }
  else if (h1 <= x && l2 <= x){
    if((h2 + l1) <= y)
      printf("S\n");
    else printf("N\n");
  }
  return 0;
}
