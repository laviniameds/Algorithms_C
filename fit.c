#include <stdio.h>

int checkTamanho(int k){
  int x = 0;
  while(k != 0){
    k = k/10;
    x++;
  }
  return x;
}

int main() {
  int a, b, i, count=0, n;
  scanf("%d", &n);
  while(n != 0){
    scanf("%d%d" ,&a ,&b);
    int tamanhoB = checkTamanho(b);
    for(i=0;i<tamanhoB;i++){
      if(a%10 == b%10){
        a = a/10;
        b = b/10;
        count++;
      }
      else break;
    }
    if(count == tamanhoB)
      printf("encaixa\n");
    else printf("nao encaixa\n");
    count = 0;
    n--;
  }
  return 0;
}
