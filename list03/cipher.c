#include <stdio.h>

int main(){

  int n, i = 0, qtd = 0;
  char v[50] = {0};
  scanf("%d", &n);
  while(n != 0){
    scanf("%s %d",v ,&qtd);
    while(i < 50){
      if(v[i] != 0){
        if((v[i]-qtd) < 65)
          v[i] = (91-qtd)+(v[i]-65);
        else
          v[i] -= qtd;
      }
      else break;
      i++;
    }
    printf("%s\n", v);
    i = 0;
    n--;
  }

  return 0;
}
