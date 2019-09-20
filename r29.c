/*submit your answer to 29
整数 n が立方数であるかどうかを判定する関数 int is_cubic(int n). 9663597 は立方数である。*/

#include <stdio.h>

int is_cubic(int n);

int main(void){

  printf("%d\n", is_cubic(9663597));
  return 0;
}

int is_cubic(int n){

  for(int i = 1; i <= n; i++){
        
    if(i*i*i == n){
      return 1;
    }
  }
  
  return 0;
}
