#include <stdio.h>
#include <string.h>

int main(){
  int d, tamanho = 1, i;
  char tipo, braile1[400], braile2[400];

  scanf("%d" ,&d);
  while(d != 0){

    scanf(" %c", &tipo);
      if(tipo == 'S'){
        char numDecimal[d+1];
        scanf(" %[^\n]s", numDecimal);

        for(i=0;i<d;i++){
          if(numDecimal[i] == '1' || numDecimal[i] == '2' ||
            numDecimal[i] == '5' || numDecimal[i] == '8'){
              printf("*. ");
          }
          if(numDecimal[i] == '3' || numDecimal[i] == '4' ||
            numDecimal[i] == '6' || numDecimal[i] == '7'){
              printf("** ");
          }
          else if(numDecimal[i] == '9' || numDecimal[i] == '0')
            printf(".* ");
        }
        printf("\n");

        for(i=0;i<d;i++){
          if(numDecimal[i] == '1' || numDecimal[i] == '3'){
              printf(".. ");
          }
          if(numDecimal[i] == '2' || numDecimal[i] == '6' ||
            numDecimal[i] == '9'){
              printf("*. ");
          }
          else if(numDecimal[i] == '4' || numDecimal[i] == '5'){
            printf(".* ");
          }
          else if(numDecimal[i] == '7' || numDecimal[i] == '8' || numDecimal[i] == '0'){
            printf("** ");
          }
        }
        printf("\n");
        for(i=0;i<d;i++)
          printf(".. ");

      printf("\n");
    }
    else{
        scanf(" %[^\n]s", braile1);
        tamanho = strlen(braile1);
        scanf(" %[^\n]s", braile2);
        for(i=0;i<tamanho-1;i++){
          if((braile1[i] == '*') && (braile1[i+1] == '.')){
            if((braile2[i] == '.') && (braile2[i+1] == '.'))
              printf("1");
            else if((braile2[i] == '*') && (braile2[i+1] == '.'))
              printf("2");
            else if((braile2[i] == '.') && (braile2[i+1] == '*'))
              printf("5");
            else if((braile2[i] == '*') && (braile2[i+1] == '*'))
              printf("8");
          }
          else if((braile1[i] == '*') && (braile1[i+1] == '*')){
            if((braile2[i] == '.') && (braile2[i+1] == '.'))
              printf("3");
            else if((braile2[i] == '.') && (braile2[i+1] == '*'))
              printf("4");
            else if((braile2[i] == '*') && (braile2[i+1] == '.'))
              printf("6");
            else if((braile2[i] == '*') && (braile2[i+1] == '*'))
              printf("7");
          }
          else if((braile1[i] == '.') && (braile1[i+1] == '*')){
            if((braile2[i] == '*') && (braile2[i+1] == '.'))
              printf("9");
            else if((braile2[i] == '*') && (braile2[i+1] == '*'))
              printf("0");
          }
        }
      scanf(" %[^\n]s", braile2);
      printf("\n");
    }
    scanf("%d" ,&d);
  }

  return 0;
}
