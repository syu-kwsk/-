/*submit your answer to 10
整数 x, y を引数にとり、それらを足した数を戻り値とする関数 int add2(int x, int y).*/

#include <stdio.h>

int add2(int x, int y);

int main(void){

  printf("%d\n", add2(8, 14) );
  return 0;
  
}

int add2(int x, int y){
  return (x + y);
}
