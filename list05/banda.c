#include <stdio.h>

#define MAX 110
#define MAX_COMB 3
int melhor_afin[MAX_COMB];

/*soma a matriz com a combinacao especifica*/
int soma_matriz(int matriz_afinidade[MAX][MAX], int vet_solucao[MAX_COMB]){
  int maior = 0, i, j;
  for (i = 0; i < MAX_COMB; i++)
    for (j = i+1; j < MAX_COMB; j++)
      maior += matriz_afinidade[vet_solucao[i]][vet_solucao[j]];

  return maior;
}

/* faz combinacao de n, 3 em 3 */
int combinacao(int matriz_afinidade[MAX][MAX], int k, int vet_bool[MAX], int vet[MAX],
  int n, int qtd, int vet_solucao[MAX_COMB], int maiorTotal){

  int i, c=0, maior=0;
  if(k == n+2){
    return maiorTotal;
  }

  if(qtd == MAX_COMB){
    for(i=1;i<=n;i++)
      if(vet_bool[i] == 1)
        vet_solucao[c++] = i;/*vet[i];*/
    maior = soma_matriz(matriz_afinidade, vet_solucao);
    if(maior >= maiorTotal){
      maiorTotal=maior;
      for(i=0;i<MAX_COMB;i++)
        melhor_afin[i] = vet_solucao[i];
      }
    return maiorTotal;
  }


  else{
    vet_bool[k] = 1;
    maiorTotal=combinacao(matriz_afinidade, k+1, vet_bool, vet, n, qtd+1, vet_solucao, maiorTotal);
    vet_bool[k] = 0;
    maiorTotal=combinacao(matriz_afinidade, k+1, vet_bool, vet, n, qtd, vet_solucao, maiorTotal);
  }
  return maiorTotal;
}

int main(int argc, char const *argv[]) {

  int vet_bool[MAX] = {0};
  int vet_solucao[MAX_COMB] = {0};
  int vet[MAX] = {0};
  int matriz_afinidade[MAX][MAX];
  int n, qtdPessoas, i, j, k, x, afinidade, maiorTotal;

  scanf("%d %d" ,&qtdPessoas, &n);

  for(k=0;k<=qtdPessoas;k++)
    for(x=0;x<=qtdPessoas;x++)
      matriz_afinidade[k][x] = 0;

  for(k=0;k<=qtdPessoas;k++)
    vet[k] = k;

  for(k=0;k<n;k++){
    scanf("%d %d %d", &i, &j, &afinidade);
    matriz_afinidade[i][j] = afinidade;
    matriz_afinidade[j][i] = afinidade;
  }

  for (i=0 ; i<MAX_COMB ; ++i)
    melhor_afin[i]=i+1;
  maiorTotal=0;
  maiorTotal=combinacao(matriz_afinidade, 1, vet_bool, vet, qtdPessoas, 0, vet_solucao, maiorTotal);

  for(i=0;i<MAX_COMB-1;i++)
    printf("%d ", melhor_afin[i]);
  printf("%d\n",melhor_afin[i]);

  return 0;
}
