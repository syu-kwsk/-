/*submit your answer to 9
整数 x, y を引数にとり、それらを足した数をプリントする関数 void add2_p(int x, int y).*/

#include <stdio.h>

void add2_p(int x, int y);

int main(void){

  add2_p(8, 14);
  
  return 0;

}

void add2_p(int x, int y){

  printf("%d\n", x+y);
}
