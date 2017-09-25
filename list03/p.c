#include <stdio.h>
#include <string.h>

int main(){

  int i, tam = 0, k = 1;
  char linha[1050];
  scanf(" %[^\n]s", linha);
  tam = strlen(linha);

  for(i=0;i<tam;i++){
    if(i%2 == k)
      printf("%c", linha[i]);
    else if(!(linha[i] != ' ')){
      printf(" ");
      if(k == 0) k = 1;
      else if(k == 1) k = 0;
    }
  }
  printf("\n");
  return 0;
}
