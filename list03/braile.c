#include <stdio.h>

int main(){
  int d, numDecimal, tamanho = 1, i, j, qtd, c;
  char tipo[2];
  char matriz[5][400];
  scanf("%d" ,&d);
  while(d != 0){

    scanf("%s", tipo);
    if(tipo[0] == 'S'){
      scanf("%d", &numDecimal);

      qtd = d;
      tamanho = 1;
      int digitos[qtd];
      while(--qtd != 0)
        tamanho *= 10;

      for(i=0;i<d;i++){
        if(tamanho == 0) tamanho = 1;
        digitos[i] = numDecimal/tamanho;
        numDecimal = numDecimal%tamanho;
        tamanho = tamanho/10;
      }

      c = 0;
      for(i=0;i<d;i++){
        if(digitos[i] == 1){
          matriz[0][c] = '*'; matriz[0][c+1] = '.'; matriz[0][c+2] = ' ';
          matriz[1][c] = '.'; matriz[1][c+1] = '.'; matriz[1][c+2] = ' ';
          matriz[2][c] = '.'; matriz[2][c+1] = '.'; matriz[2][c+2] = ' ';
          c = c+3;
        }
        else if(digitos[i] == 2){
          matriz[0][c] = '*'; matriz[0][c+1] = '.'; matriz[0][c+2] = ' ';
          matriz[1][c] = '*'; matriz[1][c+1] = '.'; matriz[1][c+2] = ' ';
          matriz[2][c] = '.'; matriz[2][c+1] = '.'; matriz[2][c+2] = ' ';
          c = c+3;
        }
        else if(digitos[i] == 3){
          matriz[0][c] = '*'; matriz[0][c+1] = '*'; matriz[0][c+2] = ' ';
          matriz[1][c] = '.'; matriz[1][c+1] = '.'; matriz[1][c+2] = ' ';
          matriz[2][c] = '.'; matriz[2][c+1] = '.'; matriz[2][c+2] = ' ';
          c = c+3;
        }
        else if(digitos[i] == 4){
          matriz[0][c] = '*'; matriz[0][c+1] = '*'; matriz[0][c+2] = ' ';
          matriz[1][c] = '.'; matriz[1][c+1] = '*'; matriz[1][c+2] = ' ';
          matriz[2][c] = '.'; matriz[2][c+1] = '.'; matriz[2][c+2] = ' ';
          c = c+3;
        }
        else if(digitos[i] == 5){
          matriz[0][c] = '*'; matriz[0][c+1] = '.'; matriz[0][c+2] = ' ';
          matriz[1][c] = '.'; matriz[1][c+1] = '*'; matriz[1][c+2] = ' ';
          matriz[2][c] = '.'; matriz[2][c+1] = '.'; matriz[2][c+2] = ' ';
          c = c+3;
        }
        else if(digitos[i] == 6){
          matriz[0][c] = '*'; matriz[0][c+1] = '*'; matriz[0][c+2] = ' ';
          matriz[1][c] = '*'; matriz[1][c+1] = '.'; matriz[1][c+2] = ' ';
          matriz[2][c] = '.'; matriz[2][c+1] = '.'; matriz[2][c+2] = ' ';
          c = c+3;
        }
        else if(digitos[i] == 7){
          matriz[0][c] = '*'; matriz[0][c+1] = '*'; matriz[0][c+2] = ' ';
          matriz[1][c] = '*'; matriz[1][c+1] = '*'; matriz[1][c+2] = ' ';
          matriz[2][c] = '.'; matriz[2][c+1] = '.'; matriz[2][c+2] = ' ';
          c = c+3;
        }
        else if(digitos[i] == 8){
          matriz[0][c] = '*'; matriz[0][c+1] = '.'; matriz[0][c+2] = ' ';
          matriz[1][c] = '*'; matriz[1][c+1] = '*'; matriz[1][c+2] = ' ';
          matriz[2][c] = '.'; matriz[2][c+1] = '.'; matriz[2][c+2] = ' ';
          c = c+3;
        }
        else if(digitos[i] == 9){
          matriz[0][c] = '.'; matriz[0][c+1] = '*'; matriz[0][c+2] = ' ';
          matriz[1][c] = '*'; matriz[1][c+1] = '.'; matriz[1][c+2] = ' ';
          matriz[2][c] = '.'; matriz[2][c+1] = '.'; matriz[2][c+2] = ' ';
          c = c+3;
        }
        else if(digitos[i] == 0){
          matriz[0][c] = '.'; matriz[0][c+1] = '*'; matriz[0][c+2] = ' ';
          matriz[1][c] = '*'; matriz[1][c+1] = '*'; matriz[1][c+2] = ' ';
          matriz[2][c] = '.'; matriz[2][c+1] = '.'; matriz[2][c+2] = ' ';
          c = c+3;
        }
      }
      for(i=0;i<3;i++){
        for(j=0;j<c;j++)
            printf("%c",matriz[i][j]);
        printf("\n");
      }
    }
    else if(tipo[0] == 'B'){
      c = d*3;
      for(i=0;i<3;i++)
        for(j=0;j<c;j++)
          scanf("%c", &matriz[i][j]);

        for(j=0;j<(c-1);j++){
          if(matriz[0][j] == '*' && matriz[0][j+1] == '.' &&
          matriz[1][j] == '.' && matriz[1][j+1] == '.')
             printf("%d", 1);

          else if(matriz[0][j] == '*' && matriz[0][j+1] == '.' &&
          matriz[1][j] == '*' && matriz[1][j+1] == '.')
            printf("%d", 2);

          else if(matriz[0][j] == '*' && matriz[0][j+1] == '*' &&
          matriz[1][j] == '.' && matriz[1][j+1] == '.')
            printf("%d", 3);

          else if(matriz[0][j] == '*' && matriz[0][j+1] == '*' &&
          matriz[1][j] == '.' && matriz[1][j+1] == '*')
            printf("%d", 4);

          else if(matriz[0][j] == '*' && matriz[0][j+1] == '.' &&
          matriz[1][j] == '.' && matriz[1][j+1] == '*')
            printf("%d", 5);

          else if(matriz[0][j] == '*' && matriz[0][j+1] == '*' &&
          matriz[1][j] == '*' && matriz[1][j+1] == '.')
            printf("%d", 6);

          else if(matriz[0][j] == '*' && matriz[0][j+1] == '*' &&
          matriz[1][j] == '*' && matriz[1][j+1] == '*')
            printf("%d", 7);

          else if(matriz[0][j] == '*' && matriz[0][j+1] == '.' &&
          matriz[1][j] == '*' && matriz[1][j+1] == '*')
            printf("%d", 8);

          else if(matriz[0][j] == '.' && matriz[0][j+1] == '*' &&
          matriz[1][j] == '*' && matriz[1][j+1] == '.')
            printf("%d", 9);

          else if(matriz[0][j] == '.' && matriz[0][j+1] == '*' &&
          matriz[1][j] == '*' && matriz[1][j+1] == '*')
            printf("%d", 0);
        }
        printf("\n");
    }
    scanf("%d" ,&d);
  }

  return 0;
}
