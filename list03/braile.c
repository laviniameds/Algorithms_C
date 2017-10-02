#include <stdio.h>

int binario(int n){
  int i, j = 0;
  char bin[32] = {0};
  while(n != 0){
    bin[j] = n%10;
    n = n/2;
    j++;
  }
  for(i=j-1; i>=0; i--){
   printf("%c", bin[i]);
  }
}

int main(){
  int d, numDecimal;
  char tipo[2];
  char cartela[4][3];
  scanf("%d" ,&d);
  while(d != 0){

    scanf("%s", tipo);
    if(tipo[0] == 'S'){
      scanf("%d", &numDecimal);
      while(numDecimal != 0){
        if(numDecimal%10 == 0){

        }
      }
    }
    else{

    }

    scanf("%d" ,&d);
  }

  return 0;
}
