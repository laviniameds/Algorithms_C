#include <stdio.h>

int main() {

  int afinidade, qtdPessoas, i, j, k, x, z, p1, p2, p3;

  scanf("%d %d" ,&qtdPessoas, &afinidade);

  int matriz[afinidade][afinidade];

/*zera matriz*/
  for(k=0;k<afinidade;k++)
    for(x=0;x<afinidade;x++)
      matriz[k][x] = 0;

  for(k=0;k<afinidade;k++){
    scanf("%d %d", &i, &j);
    scanf("%d", &matriz[i][j]);
  }

  int maior = 0;

  for(k=0;k<afinidade;k++)
    for(x=0;x<afinidade;x++)
      for(z=x+1;z<afinidade;z++)
        if((matriz[k][x] + matriz[k][z]) > maior){
            maior = matriz[k][x] + matriz[k][z];
            p1 = k;
            p2 = x;
            p3 = z;
        }

  printf("%d\n%d\n%d\n%d\n", maior, p1, p2, p3);

  return 0;
}
