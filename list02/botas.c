#include <stdio.h>

int main(){
  int n, i, j, count=0;

  while(scanf("%d", &n) != EOF){
    int num[n];
    char tam[n];
    for(i=0;i<n-1;i++){
      scanf("%d %c", &num[i], &tam[i]);
    }
    for(i=0;i<n;i++)
      for(j=(i+1);j<n;j++){
         if((num[i] == num[j]) && (tam[i] != tam[j]) && ((tam[i] == 'E' || tam[i] == 'D') && (tam[j] == 'E' || tam[j] == 'D'))){
            count++;
            num[i] = 0;
            tam[i] = 'K';
            num[j] = 1;
            tam[j] = 'Y';
        }
      }
    printf("%d\n", count);
    count=0;
  }

  return 0;
}
