#include <stdio.h>
int main(){
  int x, y, l1, h1, l2, h2, areaF1, areaF2, areaT;
  scanf("%d %d", &x, &y);
  scanf("%d %d", &l1, &h1);
  scanf("%d %d", &l2, &h2);
  areaT = x*y;
  areaF1 = l1*h1;
  areaF2 = l2*h2;
  if((areaF1+areaF2)<= areaT){
    if(((l1+l2) <= x) && (h1 <= y) && (h2 <= y))
      printf("S\n");
    else if(((h2+l1) <= x) && (l2 <= y) && (h1 <= y))
      printf("S\n");
    else if(((h1 + h2) <= x) && (l1 <= y) && (l2 <= y))
      printf("S\n");
    else if(((h1 + l2) <= x) && (l1 <= y) && (h2 <= y))
      printf("S\n");
    else if(((l1+l2) <= y) && (h1 <= x) && (h2 <= x))
      printf("S\n");
    else if(((h2+l1) <= y) && (l2 <= x) && (h1 <= x))
      printf("S\n");
    else if(((h1 + h2) <= y) && (l1 <= x) && (l2 <= x))
      printf("S\n");
    else if(((h1 + l2) <= y) && (l1 <= x) && (h2 <= x))
      printf("S\n");
    else printf("N\n");
  }
  else printf("N\n");
  return 0;
}
