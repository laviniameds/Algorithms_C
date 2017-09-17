#include <stdio.h>

int minutos(int h1, int m1, int h2, int m2){
  if(h2 == 0) h2 = 24;
  if(h1 == h2){
    if(m1 == m2) return 0;
    else if(m2 > m1) return m2-m1;
    else return (24*60)-(m1-m2);
  }
  else if(h2 > h1){
    if(m1 == m2) return (h2-h1)*60;
    else if(m2>m1) return ((h2-h1)*60)+(m2-m1);
    else return ((h2-h1)*60)-(m1-m2);
  }
  else{
    if(m1 == m2) return ((24-h1)+h2)*60;
    else if(m2>m1) return (((24-h1)*60)-m1)+((h2*60)+m2);
    else return (((24-h1)*60)-m1)+((h2*60)+m2);
  }
}

int main(){
  int h1, m1, h2, m2;
  scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
  while((h1+m1+h2+m2) != 0){
    printf("%d\n", minutos(h1, m1, h2, m2));
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
  }
}
