#include <stdio.h>

int main(){

  int a1, a2, a3, min1 = 0, min2 = 0, min3 = 0;
  scanf("%d\n", &a1);
  scanf("%d\n", &a2);
  scanf("%d\n", &a3);

    min1 = (a3*4) + (a2*2);
    min2 = (a1*2) + (a3*2);
    min3 = (a1*4) + (a2*2);

    if(min1 <= min2 && min1 <= min3)
      printf("%d\n", min1);
    else if(min2 <= min1 && min2 <= min3)
      printf("%d\n", min2);
    else printf("%d\n", min3);

  return 0;
}
