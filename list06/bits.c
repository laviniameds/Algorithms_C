#include <stdio.h>

void bit_guloso(int valor, int cedulas[4]){
  int i=0, resultado[4] = {0};

  while(valor != 0){
    if(valor >= cedulas[i]){
      resultado[i]++;
      valor -= cedulas[i];
    }
    else{
      i++;
    }
  }

  for(i=0;i<4;i++)
    printf("%d ", resultado[i]);
}

int main(int argc, char const *argv[]) {

  int n, count = 1, cedulas[4];

  cedulas[0] = 50;
  cedulas[1] = 10;
  cedulas[2] = 5;
  cedulas[3] = 1;

  scanf("%d\n", &n);
  while (n != 0) {

    printf("Teste %d\n", count++);
    bit_guloso(n, cedulas);
    printf("\n");

    scanf("%d\n", &n);
  }

  return 0;
}
