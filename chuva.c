#include <stdio.h>

int main(){

  int n, i, j, soma;

  scanf("%d", &n);

  int matriz1[n][n];
  int matriz2[n][n];

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d", &matriz1[i][j]);
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d", &matriz2[i][j]);
    }
  }

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      soma = matriz1[i][j] + matriz2[i][j];
      printf("%d ", soma);
    }
    printf("\n");
  }
  return 0;
}
