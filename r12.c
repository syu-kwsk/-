/*submit your answer to 12
整数 x, y を引数にとり、大きい方の整数をプリントする関数 void max_p(int x, int y).*/

#include <stdio.h>

void max_p(int x, int y);

int main(void){

  max_p(8, 16);
  
  return 0;
}

void max_p(int x, int y){

  printf("%d\n", x > y ? x : y);
  
}
