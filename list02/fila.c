#include <stdio.h>

int main(){
  int n, m, i, j;

  scanf("%d", &n);
  int fila[n];
  for(i=0;i<n;i++)
    scanf("%d", &fila[i]);

  scanf("%d", &m);
  int id[m];
  for(i=0;i<m;i++)
    scanf("%d", &id[i]);

  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      if(fila[i] == id[j])
        fila[i] = -1;

  for(i=0;i<n;i++)
    if(fila[i] != -1)
    printf("%d ", fila[i]);

  printf("\n");
  return 0;
}
