#include <stdio.h>

int main(){
  int n, r, i, j;
  while(scanf("%d %d", &n, &r) != EOF){

      int voltaram[r];
      int todos[n];
      for(i=0;i<r;i++)
        scanf("%d", &voltaram[i]);

      if(r == n){
        printf("*\n");
      }

      else{

        for(i=0;i<n;i++)
          todos[i] = i+1;

        for(i=0;i<n;i++){
          for(j=0;j<r;j++){
            if(todos[i] == voltaram[j])
              todos[i] = 0;
          }
        }

        for(i=0;i<n;i++){
          if(todos[i] != 0)
            printf("%d ", todos[i]);
        }

        printf("\n");

      }
  }
  return 0;
}
