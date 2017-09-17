#include <stdio.h>

int main(){

  int j, r, i, jogadas=0, count=0, maior=0, ganhador=0;
  scanf("%d %d", &j, &r);
  jogadas = j*r;
  int pontos[jogadas];
  int jogadores[j];

  for(i=0;i<j;i++)
    jogadores[i] = 0;

  for(i=0;i<jogadas;i++){
    scanf("%d" ,&pontos[i]);
    jogadores[count] += pontos[i];
    count++;
    if (count == j)
      count = 0;
  }
  maior = jogadores[j-1];
  ganhador = j-1;
  for(i=(j-2);i>=0;i--){
    if(maior < jogadores[i]){
      maior = jogadores[i];
      ganhador = i;
    }
  }
  printf("%d\n", ganhador+1);

  return 0;
}
