#include <stdio.h>

int main(){

  int n, i, j, k, y, count=0, count1=0;
  int cartela[9][9];
  int lista[9];
  scanf("%d", &n);
  while (n != 0) {

    for(i=0;i<9;i++)
      for(j=0;j<9;j++)
        scanf("%d", &cartela[i][j]);

    for(i=0;i<9;i++){
      for(j=0;j<8;j++){
        if((cartela[i][j] != cartela[i][j+1]) && (cartela[j][i] != cartela[j+1][i]))
          count++;
        else break;
      }
    }

    for(k=0;k<8;k++){
      for(i=0;i<9;i++){
        for(j=0;j<2;j++){
            lista[i] = cartela[i][j];
        }
      }
      if(lista[k] != lista[k+1])
        count1++;
      else break;
      for(y=0;y<9;y++)
        lista[y] = 0;
    }


    printf("%d\n", count+count1);
    count = 0;
    count1 = 0;
    n--;
  }
  return 0;
}
