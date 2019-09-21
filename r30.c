/*submit your answer to 30
整数 n が 二つの整数の2乗の和として表されるかどうかを判定する関数 int is_squeare_sum(int n). is_square_sum(452) は 1 を返す。 452 = 142+162.*/

#include <stdio.h>

int is_square(int n);
int is_square_sum(int n);

int main(void){

  printf("%d\n", is_square_sum(452));
}

int is_square(int n){
  for(int i = 1; i < n; i++){
    if( i * i == n){
      return 1;
    }
  }
  
  return 0;
}

int is_square_sum(int n){
  for(int i = 1; i <= n; i++){
    if(is_square(n - i*i)){
      return 1;
    }
  }
  return 0;
}
