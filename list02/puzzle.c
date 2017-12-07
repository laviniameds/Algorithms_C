#include <stdio.h>

int main(){
  int l, c, i, j, k=0, x=0, y=0;
  scanf("%d %d", &l, &c);
  int tamC = (c*3)+3;
  char matriz[l][c*2];
  char simbolo;
  int somaLinha[l];

  for(i=0;i<l;i++){
    for(j=0;j<tamC;j++){
      scanf("%c", &simbolo);
      if(simbolo >= 97 && simbolo <= 122)
        matriz[x][k++] = simbolo;
    }
    x++;
    k=0;
  }

  for(i=0;i<l;i++)
    printf("%d\n", somaLinha[i]);
  /*for(i=0;i<l;i++)
    for(j=0;j<c;j++){
      if((matriz[i][0] + matriz[i][1]) == (matriz[i][(j+2)] + matriz[i][j+3]))
        count++;
      else if((matriz[0][j] + matriz[1][j]) == (matriz[i][j] + matriz[i][j+1]))
    }*/

  return 0;
}
