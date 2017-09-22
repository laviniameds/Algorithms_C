#include <stdio.h>

int main(){

  int n, i, j, k, count=0, y=0, c=0, x=0;
  int cartela[9][9];
  int lista[81];
  int newC[9][9];
  scanf("%d", &n);
  while (y != n) {

    for(i=0;i<9;i++)
      for(j=0;j<9;j++)
        scanf("%d", &cartela[i][j]);


    for(k=0;k<3;k++){
      for(i=0;i<3;i++){
        lista[x++] = cartela[k][i];
      }
    }

    for(k=0;k<3;k++){
      for(i=3;i<6;i++){
        lista[x++] = cartela[k][i];
      }
    }

    for(k=0;k<3;k++){
      for(i=6;i<9;i++){
        lista[x++] = cartela[k][i];
      }
    }

    for(k=3;k<6;k++){
      for(i=0;i<3;i++){
        lista[x++] = cartela[k][i];
      }
    }

    for(k=3;k<6;k++){
      for(i=3;i<6;i++){
        lista[x++] = cartela[k][i];
      }
    }

    for(k=3;k<6;k++){
      for(i=6;i<9;i++){
        lista[x++] = cartela[k][i];
      }
    }

    for(k=6;k<9;k++){
      for(i=0;i<3;i++){
        lista[x++] = cartela[k][i];
      }
    }

    for(k=6;k<9;k++){
      for(i=3;i<6;i++){
        lista[x++] = cartela[k][i];
      }
    }

    for(k=6;k<9;k++){
      for(i=6;i<9;i++){
        lista[x++] = cartela[k][i];
      }
    }

    for(i=0;i<9;i++)
      for(j=0;j<9;j++)
        newC[i][j] = lista[c++];


    for(k=0;k<9;k++)
      for(i=0;i<9;i++)
        for(j=(i+1);j<9;j++){
          if(cartela[k][i] == cartela[k][j])
            count++;
          else if(cartela[i][k] == cartela[j][k])
            count++;
          if(newC[k][i] == newC[k][j])
            count++;
        }


    if(count == 0)
      printf("Instancia %d\nSIM\n\n", y+1);
    else
      printf("Instancia %d\nNAO\n\n", y+1);
    count=0;
    c = 0;
    x = 0;
    y++;
  }
  return 0;
}
