#include <stdio.h>
#include <string.h>

int main(){

  int n, count=0, i, tamanhoB=0, tamanhoA=0;
  char a[1001];
  char b[1001];
  scanf("%d" ,&n);
  while(n != 0){
    scanf("%s %s", a, b);
    tamanhoB = strlen(b);
    tamanhoA = strlen(a)-1;
    for(i=(tamanhoB-1);i>=0;i--){
      if(b[i] == a[tamanhoA])
        count++;
      tamanhoA--;
    }
    if(count == strlen(b))
      printf("encaixa\n");
    else
      printf("nao encaixa\n");
    count = 0;
    n--;
  }
  return 0;
}
