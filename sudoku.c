#include <stdio.h>

int main(){

  int n, i, j, count, k;
  int cartela[9][9];
  int umA9[9];
  scanf("%d", &n);
  while (n != 0) {
    count=0;

    for(i=0;i<9;i++){
      umA9[i] = i+1;
      for(j=0;j<9;j++){
        scanf("%d", &cartela[i][j]);
      }
    }
    for(j=0;j<9;j++){
      for(i=0;i<9;i++){
        for(k=0;k<9;k++){
          if(cartela[j][k] == umA9[i])
            count++;
        }
      }
      if(count > 9) break;
      else{
        count = 0;
      }
    }

    if(count > 9)
      printf("NAO\n");
    else printf("SIM\n");


    /*for(i=0; i<9; i++){
       for(j= 8; j>=0; j--){
          for(var1 = j-1; var1>=0; var1--){
             if(cartela[i][j]< cartela[i][var1]){
                var2= cartela[i][j];
                cartela[i][j]= cartela[i][var1];
                cartela[i][var1]=var2;
             }
          }
       }
     }*/

    /*  for(i=0;i<9;i++){
        for(j=0;j<9;j++){
          printf("%2d", cartela[i][j]);
        }
        printf("\n");
      }
      printf("\n");*/
    n--;
  }
  return 0;
}
