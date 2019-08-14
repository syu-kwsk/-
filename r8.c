/*submit your answer to 8
整数 x を引数にとり、それが偶数だったら 1、 奇数だったら 0 を返す関数 int even(int x).*/

#include <stdio.h>

int even(int x);

int main(void){

  printf("%d\n", even(64721232));
  return 0;
}

int even(int x){
  return (x+1) % 2;
}
