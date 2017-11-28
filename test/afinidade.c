/*#include <stdio.h>

int main() {

int afinidade, qtdPessoas, i, j, k, x, z, p1, p2, p3, maior=0;

  scanf("%d %d" ,&qtdPessoas, &afinidade);

  int matriz[afinidade][afinidade];


  for(k=0;k<afinidade;k++)
    for(x=0;x<afinidade;x++)
      matriz[k][x] = 0;

  for(k=0;k<afinidade;k++){
    scanf("%d %d", &i, &j);
    scanf("%d", &matriz[i][j]);
  }

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
}*/

#include <stdio.h>

#define MAX 1001

int maior_afinidade(int afinidades[MAX][MAX],int n){
  int maior_afinidade = 0, i, j, k;
    for (i=0 ; i<(n-2) ; ++i){
      for (j=i+1 ; j<(n-1) ; ++j){
        for (k=j+1 ; k<n ; ++k){
          if ((afinidades[i][j] + afinidades[i][k]) > maior_afinidade){
            maior_afinidade = afinidades[i][j] + afinidades[i][k];
          }
        }
      }
    }
  return maior_afinidade;
}
int main(){
  int i,n,m,k,x,p1,p2,afinidade;
  int afinidades[MAX][MAX];

  while (scanf("%d %d",&n,&m),n){

    for(k=0;k<n;k++)
      for(x=0;x<n;x++)
        afinidades[k][x] = 0;

    for (i=0 ; i<m ; ++i){
      scanf("%d %d %d",&p1,&p2,&afinidade);
      afinidades[p1][p2] = afinidade;
      afinidades[p2][p1] = afinidade;
    }
    printf("%d\n",maior_afinidade(afinidades,m));
  }

  return 0;

}
