#include <stdio.h>
#include <math.h>

double hipotenusa(int c1, int c2){
  return sqrt(pow(c1, 2) + pow(c2, 2));
}

int main(){
  double d, vf, vg, h, tf, tg;
  while (scanf("%lf %lf %lf" ,&d, &vf, &vg)!=EOF){
    h = hipotenusa(d, 12);
    tf = 12/vf;
    tg = h/vg;
    if(tf >= tg)
      printf("S\n");
    else
      printf("N\n");
  }
}
