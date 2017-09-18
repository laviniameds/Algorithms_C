#include <stdio.h>

int main(){
  int n, count = 0, i=0;
  char v[1000];
  scanf("%d", &n);
  while(n != 0){
    scanf("%s", v);
    while(v[i] != '\n'){
      if(v[i] == '1')
        count += 2;
      else if(v[i] == '2' || v[i] == '3'||v[i] == '5')
        count += 5;
      else if(v[i] == '4')
        count += 4;
      else if(v[i] == '6' || v[i] == '9'||v[i] == '0')
        count += 6;
      else if(v[i] == '7')
        count += 3;
      else if(v[i] == '8')
        count += 7;
      else break;
      i++;
    }
    printf("%d leds\n", count);
    count = 0;
    i = 0;
    n--;
  }
  return 0;
}
