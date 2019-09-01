/*submit your answer to 17
整数二つを引数とし、第 1 引数が第 2 引数で割り切れたら 1、 そうでない時 0 を返す関数 int divide(int x, int y).*/

#include <stdio.h>

int divide(int x, int y);

int main(void){

  printf("%d\n", divide(9, 1));

  return 0;
}

int divide(int x, int y){
  if(x % y == 0){
    return 1;
  }
  else{
    return 0;
  }
}
