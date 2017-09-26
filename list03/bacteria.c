#include <stdio.h>
#include <string.h>

int main(){
  char seq[150];
  char bac[150];
  int tamSeq = 0, tamBac = 0, i = 0, count = 0, k = 0;

  while (scanf("%s %s", bac, seq) != EOF) {
    tamSeq = strlen(seq);
    tamBac = strlen(bac);

    for(k=0;k<tamBac;k++){
      for(i=0;i<tamSeq;i++){
        if(bac[i+k] == seq[i])
          count++;
      }
      if(count == tamSeq)
        break;
      else count = 0;
    }

    if(count==tamSeq)
      printf("Resistente\n");
    else printf("Nao resistente\n");

    count = 0;
  }

  return 0;
}
