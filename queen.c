#include <stdio.h>
int main(){
  int x1, y1, x2, y2, k, z;
  scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
  while((x1!=0) && (x2!=0) && (y1!=0) && (y2!=0)){
    k = x1 - x2;
    z = y1 - y2;
    if(x1 == x2 && y1 == y2)
      printf("0\n");
    else if(x1 == x2 || y1 == y2)
      printf("1\n");
    else if(z == k || z == -k || k == -z || -z == -k)
      printf("1\n");
    else
      printf("2\n");
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
  }
  return 0;
}
