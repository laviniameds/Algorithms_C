#include <stdio.h>
#define MAX 21

int rejeita(int matriz[MAX][MAX], int comissao[MAX], int qtd_comissao){
  int i, j;
  for(i=1;i<=qtd_comissao;i++)
    for(j=0;j<=qtd_comissao;j++){
      if(matriz[i][j] == 0)
        break;
      else if(matriz[i][j] == comissao[i])
        return 1;
    }
  return 0;
}

int comissao_bt(int matriz[MAX][MAX], int comissao[MAX], int qtd_comissao,
  int proxima, int qtd_max, int n){

  int i;

  if(rejeita(matriz, comissao, qtd_comissao) == 1)
    return 0;

  if(qtd_comissao > qtd_max)
    qtd_max = qtd_comissao;

  for(i=proxima;i<=n;i++){
    comissao[qtd_comissao]=i;
    comissao_bt(matriz, comissao, qtd_comissao+1, i+1, qtd_max, n);
  }

  return qtd_max;
}

int main(){
  int matriz[MAX][MAX];
  int comissao[MAX];
  int n, i, j, aux;
  scanf("%d", &n);

  for(i=1;i<=n;i++)
    for(j=0;j<=n;j++){
      scanf("%d", &aux);
      if(aux != 0)
        matriz[i][j] = aux;
      else{
        matriz[i][j] = aux;
        break;
      }
    }

  printf("%d\n", comissao_bt(matriz, comissao, 0, 0, 0, n));
}
