#include <stdio.h>
#include <string.h>

int main(){

  int i, tam=0, nao=0, sim1=0, sim2 = 0, sim3=0;
  char senha[100];
  while(scanf(" %[^\n]s", senha) != EOF){

    tam = strlen(senha);
    if(tam > 32 || tam < 6){
      nao++;
    }
    else{
      for(i=0;i<tam;i++){
        if((senha[i] >= 32 && senha[i] <= 47) || (senha[i] >= 58 && senha[i] <= 64)
        || (senha[i] >= 91 && senha[i] <= 96) || (senha[i] >= 123 && senha[i] <= 127)){
          nao++;
        }
        else if(senha[i] >= 48 && senha[i] <= 57)
          sim1++;
        else if(senha[i] >= 65 && senha[i] <= 90)
          sim2++;
        else if(senha[i] >= 97 && senha[i] <= 122)
          sim3++;
      }
    }
    if(sim1 > 0 && sim2 > 0 && sim3 > 0 && nao == 0)
      printf("Senha valida.\n");
    else
      printf("Senha invalida.\n");
    sim1 = sim2 = sim3 = nao = 0;
  }

  return 0;
}
