/*submit your answer to 13
整数 x, y を引数にとり、大きい方の整数を戻り値とする関数 int max2(int x, int y).*/

#include <stdio.h>

int max2(int x, int y);

int main(void){
  printf("bigger is %d\n", max2(8, 29));
}

int max2(int x, int y){
  return x > y ? x : y;
} 
