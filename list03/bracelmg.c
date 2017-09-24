#include <stdio.h>
#include <string.h>

int isEqual(char s[], char b[], int ts, int tb){
  int cont = 0, j = 0, k = 0, i = 0;
  for(k=0;k<ts;k++)
    for(i=j;i<tb;i++){
      if(s[k] == b[i]){
        j = i+1;
        cont++;
        break;
      }
    }
  return cont;
}

int main(){
    
    n--;
  }

  return 0;
}
