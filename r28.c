/*submit your answer to 28
整数 n が平方数であるかどうかを判定する関数 int is_square(int n). 237169 は平方数である。*/

#include <stdio.h>

int is_square(int n);

int main(void){
  int n = 3;
  
  if(is_square(n)){
    printf("%d is square.\n", n);
  }
  else{
    printf("%d is not square.\n", n);
  }
}

int is_square(int n){
  for(int i = 1; i < n; i++){
    if( i * i == n){
      return 1;
    }
  }
  
  return 0;
}
