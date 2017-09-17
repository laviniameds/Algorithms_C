#include <stdio.h>

int main(){
  int i = 0, j;
  char c[30];
  for(j=0;j<30;j++)c[j] = '*';
  while(scanf("%s", c) != EOF){
    while(c[i] != '\n'){
      if(c[i] == '1')
        printf("1");
      else if(c[i] == '0')
        printf("0");
      else if(c[i] == '-')
        printf("-");
      else if(c[i] == 'A'||c[i] == 'B'||c[i] == 'C')
        printf("2");
      else if(c[i] == 'D'||c[i] == 'E'||c[i] == 'F')
        printf("3");
      else if(c[i] == 'G'||c[i] == 'H'||c[i] == 'I')
        printf("4");
      else if(c[i] == 'J'||c[i] == 'K'||c[i] == 'L')
        printf("5");
      else if(c[i] == 'M'||c[i] == 'N'||c[i] == 'O')
        printf("6");
      else if(c[i] == 'P'||c[i] == 'Q'||c[i] == 'R'||c[i] == 'S')
        printf("7");
      else if(c[i] == 'T'||c[i] == 'U'||c[i] == 'V')
        printf("8");
      else if(c[i] == 'W'||c[i] == 'X'||c[i] == 'Y'||c[i] == 'Z')
        printf("9");
      else break;
      i++;
    }
    i=0;
    printf("\n");
  }

  return 0;
}
