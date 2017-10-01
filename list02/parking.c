#include <stdio.h>

int main(){

  int n, c, i, p, t, count=0, valor=0, k, x;
  char e;
  while(scanf("%d%d", &c, &n) != EOF){
    printf("eof: %d %d\n", c, n);
    int estacionamento[c];

    for(i=0;i<c;i++)
      estacionamento[i] = 1;


    for(i=0;i<n;i++){
      scanf("%c %d", &e, &p);
      if(e == 'C'){
        scanf("%d", &t);

        for(k=0;k<c;k++){
          if(estacionamento[k] == 1){
            count++;
            if(count == t){
              for(x=k;x>=0;x--)
                estacionamento[x] = p;
              valor += 10;
            }
          }
        }
      }
      else{
        for(k=0;k<c;k++)
          if(p == estacionamento[k])
            estacionamento[k] = 1;
        count=0;
      }
    }
    printf("%d\n", valor);
    valor = 0;
  }

  return 0;
}
