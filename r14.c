/*submit your answer to 14
整数三つを引数にとり、もっとも大きい整数を戻り値とする関数 int max3(int x, int y, int z).*/

#include <stdio.h>

int max2(int x, int y){
  return x > y ? x : y;
} 

int max3(int x, int y, int z);

int main(void){
  printf("%d\n", max3(19, 8, 30));
}

int max3(int x, int y, int z){
  max2( max2(x, y), z);
}
