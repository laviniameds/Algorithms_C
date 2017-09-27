#include <stdio.h>

int main(){

  int n, c, i, p, t, count=0, valor=0;
  char e;
  while(scanf("%d %d", &c, &n) != EOF){
    int estacionamento[c];
    for(i=0;i<c;i++)
      estacionamento[i] = 1;

    for(i=0;i<n;i++){
      scanf("%c %d", &e, &p);
      if(e == 'C'){
        scanf("%d", &t);

        for(k=0;k<c;k++){
          if(estacionamento[k] == 1)
            count++;
        }

        if(count >= t){
          for(x=k;x<t;x++)
            estacionamento[x] = -1;
          valor += 10;
        }
        count = 0;
      }
      else{
        for(k=0;k<c;k++){
          if(estacionamento[k] == p)
        }
      }
    }
  }

  return 0;
}
