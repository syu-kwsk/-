/*submit your answer to 6
円の半径（整数）を引数にとり、 その円の面積（浮動小数点数）を戻り値とする関数 float en(int r).*/
#include <stdio.h>

float en(int r);

int main(void){

  printf("%f\n", en(1) );
  return 0;
}

float en(int r){
  float area = r*r*3.14;
  return area;
}
