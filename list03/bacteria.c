#include <stdio.h>
#include <string.h>

int isEqual(char s[], char b[], int ts, int tb){
  char e[ts];
  int cont = 0, j = 0, k = 0, i = 0, c = 0;
  for(k=0;k<ts;k++)
    for(i=j;i<tb;i++){
      if(s[k] == b[i]){
        j = i+1;
        e[c++] = b[i];
        break;
      }
    }

    for(i=0;i<ts;i++){
      if(e[i] == s[i])
        cont++;
      else
        break;
    }
  return cont;
}

int main(){
  char seq[150];
  char bac[150];
  int tamSeq = 0;
  int tamBac = 0;

  while (scanf("%s\n%s\n", bac, seq) != EOF) {
    tamSeq = strlen(seq);
    tamBac = strlen(bac);

    if(isEqual(seq, bac, tamSeq, tamBac) == tamSeq)
      printf("Resistente\n");
    else
      printf("Nao resistente\n");
  }

  return 0;
}
