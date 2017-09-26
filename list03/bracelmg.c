#include <stdio.h>
#include <string.h>

int main(){

  int n, j=0, i, k, tamB1, tamB2, tamS, count1=0, count2=0;
  char seq[200];
  char bra[30000];
  char braIn[30000];
  scanf("%d", &n);
  while(n != 0){
    scanf("%s %s", seq, bra);

    tamB2 = strlen(bra);

    strcat(bra,bra);

    tamB1 = strlen(bra);
    tamS = strlen(seq);

    for(i=1;i<tamB2+1;i++)
      braIn[i-1] = bra[tamB2-i];

      for(k=0;k<tamB1;k++){
        for(i=0;i<tamS;i++){
          if(bra[i+k] == seq[i])
            count1++;
        }
        if(count1 == tamS)
          break;
        else count1 = 0;
      }

      j=0;

      for(k=0;k<tamB2;k++){
        for(i=0;i<tamS;i++){
          if(braIn[i+k] == seq[i])
            count2++;
        }
        if(count2 == tamS)
          break;
        else count2 = 0;
      }

    if((count1 == tamS) || (count2 == tamS))
      printf("S\n");
    else
      printf("N\n");

    count1=0;
    count2=0;
    j=0;
    n--;
  }

  return 0;
}
