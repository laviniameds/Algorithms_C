#include <stdio.h>

int main(){

  int n, c, i, p, t, count=0, valor=0, k;
  char e[2];
  while(scanf("%d %d", &c, &n) != EOF){
    int estacionamento[c];

    for(i=0;i<c;i++)
      estacionamento[i] = 1;

    for(i=0;i<n;i++){
      scanf("%s %d", e, &p);
      if(e[0] == 'C'){
        scanf("%d", &t);

        for(k=0;k<c;k++){
          if(estacionamento[k] == 1){
            count++;
            if(count == t){
              while(t != 0){
                estacionamento[k--] = p;
                t--;
              }
              valor += 10;
              count=0;
              break;
            }
          }
          else count=0;
        }
      }
      else{
        for(k=0;k<c;k++)
          if(p == estacionamento[k])
            estacionamento[k] = 1;
      }
      count=0;
    }
    printf("%d\n", valor);
    valor = 0;
    count = 0;
  }

  return 0;
}
