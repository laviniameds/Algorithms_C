#include <stdio.h>
#include <string.h>

int main(){

  int n, i, tam=0;
  char linha[1001];
  scanf("%d", &n);
  while(n != 0){
    scanf(" %[^\n]s", linha);
    tam = strlen(linha);

    for(i=0;i<tam;i++){
      if((linha[i] >= 65 && linha[i]<= 90) || (linha[i] >= 97 && linha[i] <= 122)){
        linha[i] += 3;
      }
    }

    char linhaIn[tam];

    for(i=1;i<tam+1;i++){
      linhaIn[i-1] = linha[tam-i];
    }

    for(i=(tam/2);i<tam;i++){
      linhaIn[i] -= 1;
    }

    for(i=0;i<tam;i++)
      printf("%c", linhaIn[i]);

    printf("\n");
    n--;
  }

  return 0;
}
