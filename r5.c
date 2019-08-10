/*円の半径（整数）をキーボードから読み、 その円の面積（浮動小数点数）をプリントする関数 void en_p(void).*/

#include <stdio.h>
#include <math.h>

void en_p(void);

int main(void){
  
  en_p();
  
  return 0;
}

void en_p(void){
  int r = 0;
  
  printf("Enter radius :");
  scanf("%d", &r);
  printf("Circle area is %f\r\n", M_PI*r*r);
}
