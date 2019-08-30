/*submit your answer to 15
整数 4 つを引数にとり、もっとも大きい整数を戻り値とする関数 int max4(int x, int y, int z, int w).*/

#include <stdio.h>

int max2(int x, int y){
  return x > y ? x : y;
}

int max4(int x, int y, int z, int w);

int main(void){
  printf("%d\n", max4(20, 19, 8, 30));
  return 0;
}

int max4(int x, int y, int z, int w){
  max2( max2(x, y), max2(z ,w) );
}
