#include <stdio.h>
#define MAX 110

int moedas_bt(int vetorMoedas[MAX], int vetorAux[MAX], int qtdMoedas, int valorCompra, int k){
  int i, soma=0, aux;
  if(k == qtdMoedas){
    for(i=0;i<qtdMoedas;i++){
      if(vetorAux[i] == 1)
        soma += vetorMoedas[i];  
      if(soma == valorCompra)
        return 1;
    }
  }
  else{
    vetorAux[k] = 1;
    aux = moedas_bt(vetorMoedas, vetorAux, qtdMoedas, valorCompra, k+1);
    if(aux == 1)
      return 1;
    vetorAux[k] = 0;
    aux = moedas_bt(vetorMoedas, vetorAux, qtdMoedas, valorCompra, k+1);
    if(aux == 1)
      return 1;
  }
  return 0;
}

int main(int argc, char const *argv[]) {
  int i, valorCompra, qtdMoedas, vetorMoedas[MAX], vetorAux[MAX];

  scanf("%d %d", &valorCompra, &qtdMoedas);

  for(i=0;i<qtdMoedas;i++)
    scanf("%d", &vetorMoedas[i]);

  if((moedas_bt(vetorMoedas, vetorAux, qtdMoedas, valorCompra, 0)) == 1)
    printf("S\n");
  else
    printf("N\n");

  return 0;
}
