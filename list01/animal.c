#include <stdio.h>

int main(){
  double v;
  int m, n;
  unsigned int nS100, mS100;
  scanf("%lf %d %d", &v, &n, &m);
  while(!(v == 0 && n == 0 && m == 0)){
    nS100 = n%100;
    mS100 = m%100;
    if(nS100 == 0) nS100 = 100;
    if(mS100 == 0) mS100 = 100;
    printf("%d\n", mS100-nS100);
    if(n%10000 == m%10000){
      printf("%.2lf\n", v*3000);
    }
    else if(n%1000 == m%1000){
      printf("%.2lf\n", v*500);
    }
    else if(nS100 == mS100){
      printf("%.2lf\n", v*50);
    }
    else if(((nS100 - mS100) <= 4) || ((mS100 - nS100) <= 4)){
      printf("%.2lf\n", v*16);
    }
    else{
      printf("0.00\n");
    }
    scanf("%lf %d %d", &v, &n, &m);
  }
  return 0;
}
