/*submit your answer to 4
整数を引数にとり、それに1足した数を戻り値とする関数 int add1(int x).*/

#include <stdio.h>

int add1(int x);

int main(void){
  
  printf("%d\n", add1(2) );

  return 0;
}

int add1(int x){
  return x+1;
}
