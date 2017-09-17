#include <stdio.h>

int main(){
  int t, n, i, j, count = 0, aux = 0;
  scanf("%d", &t);
  while(t != 0){
    scanf("%d", &n);
    int carneiros[n];
    for(i=0;i<n;i++){
      scanf("%d", &carneiros[i]);
    }

    for(i=0;i<n-1;i++){
          for(j=0;j<n-i-1;j++){
            if(carneiros[j]>carneiros[j+1]){
              aux = carneiros[j];
              carneiros[j] = carneiros[j+1];
              carneiros[j+1] = aux;
            }
          }
        }

    for(i=0;i<n;i++){
      for(j=(i+1);j<n;j++){
        if(carneiros[i] == carneiros[j])
          count++;
      }
    }

    printf("%d\n", n-count);

    t--;
  }
  return 0;
}
