#include <stdio.h>

int main(){
  int n, i, j, k, maior = 0;
  scanf("%d\n", &n);
  while(n != 0){
    int cartelas[n][n];
    for(i=0;i<n;i++)
      for(j=0;j<n;j++)
        scanf("%d", &cartelas[i][j]);

    int count[n];
    for(i=0;i<n;i++) count[i] = 0;

    for(i=0;i<n;i++)
      for(j=0;j<n;j++)
        if(cartelas[j][i] == 1) count[i] += 1;

    maior = count[0];
    for(k=1;k<n;k++){
      if(count[k]>maior)
        maior = count[k];
    }

    printf("%d\n", maior);
    scanf("%d\n", &n);
  }
  return 0;
}
