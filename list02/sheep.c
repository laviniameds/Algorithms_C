#include <stdio.h>

int main(){
  int t, n, i, j, count=0;
  scanf("%d", &t);
  while(t != 0){
    scanf("%d", &n);
    int carneiros[n];
    for(i=0;i<n;i++){
      scanf("%d", &carneiros[i]);
    }

    for(i=0;i<n;i++){
      for(j=(i+1);j<n;j++){
        if(carneiros[i] == carneiros[j])
          carneiros[i] = -1;
      }
    }

    for(i=0;i<n;i++){
      if(carneiros[i] != -1)
      count++;
    }
    printf("%d\n", count);

    count=0;
    t--;
  }
  return 0;
}
