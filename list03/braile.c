#include <stdio.h>

int main(){
  int d, numDecimal, tamanho = 1, i, qtd;
  char tipo, braile1[400];

  scanf("%d" ,&d);
  while(d != 0){

    scanf(" %c", &tipo);
      if(tipo == 'S'){
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

        for(i=0;i<d;i++){
          if(digitos[i] == 1 || digitos[i] == 2 ||
            digitos[i] == 5 || digitos[i] == 8){
              printf("*. ");
          }
          if(digitos[i] == 3 || digitos[i] == 4 ||
            digitos[i] == 6 || digitos[i] == 7){
              printf("** ");
          }
          else if(digitos[i] == 9 || digitos[i] == 0)
            printf(".* ");
        }
        printf("\n");

        for(i=0;i<d;i++){
          if(digitos[i] == 1 || digitos[i] == 3){
              printf(".. ");
          }
          if(digitos[i] == 2 || digitos[i] == 6 ||
            digitos[i] == 9){
              printf("*. ");
          }
          else if(digitos[i] == 4 || digitos[i] == 5){
            printf(".* ");
          }
          else if(digitos[i] == 7 || digitos[i] == 8 || digitos[i] == 0){
            printf("** ");
          }
        }
        printf("\n");
        for(i=0;i<d;i++)
          printf(".. ");

      printf("\n");
    }
    else{
      tamanho = d*3;
      scanf(" %[^\n]s", braile1);

      for(i=0;i<3;i++)
          printf("%c", braile1[i]);
      /*for(i=0;i<tamanho-1;i++){
        if((braile1[i] == '*') && (braile1[i+1] == '.')){
          if((braile2[i] == '.') && (braile2[i+1] == '.'))
            printf("1 ");
          else if((braile2[i] == '*') && (braile2[i+1] == '.'))
            printf("2 ");
          else if((braile2[i] == '.') && (braile2[i+1] == '*'))
            printf("5 ");
          else if((braile2[i] == '*') && (braile2[i+1] == '*'))
            printf("8 ");
        }
        else if((braile1[i] == '*') && (braile1[i+1] == '*')){
          if((braile2[i] == '.') && (braile2[i+1] == '.'))
            printf("3 ");
          else if((braile2[i] == '.') && (braile2[i+1] == '*'))
            printf("4 ");
          else if((braile2[i] == '*') && (braile2[i+1] == '.'))
            printf("6 ");
          else if((braile2[i] == '*') && (braile2[i+1] == '*'))
            printf("7 ");
        }
        else if((braile1[i] == '.') && (braile1[i+1] == '*')){
          if((braile2[i] == '*') && (braile2[i+1] == '.'))
            printf("9 ");
          else if((braile2[i] == '*') && (braile2[i+1] == '*'))
            printf("0 ");
        }
      }*/
    }
    scanf("%d" ,&d);
  }
  printf("\n");

  return 0;
}
